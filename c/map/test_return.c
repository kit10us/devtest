#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "const.h"

#define AssertFull(value, test_name, fail_message, do_return) 	\
	if (!(value))											\
	{															\
		printf("Unit test %s failure: %s\n", test_name, fail_message);	\
		if (do_return)										\
		{														\
			return 1;										\
		}														\
	}															\
	else														\
	{															\
		printf("Unit test %s success\n", test_name);			\
	}

#define AssertReturn(value, test_name, fail_message)	\
	AssertFull(value, test_name, fail_message, true)

#define Assert(value, test_name, fail_message)	\
	AssertFull(value, test_name, fail_message, false)


int main(int argc, char** argv)
{
	printf("Unit \"Returns\"\n");

	AssertReturn(1, "Test Assert", "Unit test AssertReturn")

	return 0;
}


