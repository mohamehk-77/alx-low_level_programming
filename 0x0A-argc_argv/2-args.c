#include <stdio.h>
/**
 * main -  program that prints all arguments it receives.
 * @argc: 1
 * @argv: 2
 * Return:0
*/
int main(int argc, char *argv[])
{
	int i;
	
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}