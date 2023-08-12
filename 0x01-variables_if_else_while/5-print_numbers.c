#include <stdio.h>

/**
 * main - Entry point
 *
 * prints numbers (0 - 10) with printf function
 *
 * Return: 0 (Success)
 */
int main(void)
{
int digit = 0;
while (digit <= 9)
{
printf("%i", digit);
digit++;
}
putchar('\n');
return (0);
}
