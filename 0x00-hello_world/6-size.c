#include <stdio.h>

/**
 * main - printing sizes
 *
 * Return: (success) 0
 */
int main(void)
{
printf("size of a char: %d byte(s)\n", sizeof(char));
printf("size of an int: %d byte(s)\n", sizeof(int));
printf("size of a long int: %d byte(s)\n", sizeof(long));
printf("size of a long long int: 8 byte(s)\n", sizeof(long long));
printf("size of a float: %d byte(s)\n", sizeof(float));
return (0);
}
