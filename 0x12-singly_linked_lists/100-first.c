#include <stdio.h>

void print_main(void) __attribute__ ((constructor));
/**
 * print_main - starting point
 */
void print_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
