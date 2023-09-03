#include <stdio.h>
/**
 * main - print the number of argumments
 * @argc: 1
 * @argv: 2
 * Retrun: 0
*/

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
