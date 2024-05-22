#include <stdio.h>
#include <stdlib.h>
#include "map.h"

int main(int argc, char ** argv, char ** env)
{
	Map*	mymap = CreateMap();

	char ** e = env;
	while (*e)
	{
		printf("%s\n", *e);
		e++;
	}
	return 0;
}
