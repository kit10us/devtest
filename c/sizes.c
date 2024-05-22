#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

int main(void)
{
	typedef unsigned char uint8_t;
	printf("%ld\n", sizeof(void*));
	printf("\n");

	uint8_t *a[3];
	printf("%ld\n", sizeof(a));
	printf("%ld\n", sizeof(*a));
	printf("\n" );

	uint8_t *b = 0;
	printf("%ld\n", sizeof(*b));
	b = malloc(sizeof(uint8_t) * 3);
	printf("%ld\n", sizeof(b));
	free(b);
	b = 0;
	
	printf("unsigned short %ld\n", sizeof(unsigned short));
	return 0;
}
