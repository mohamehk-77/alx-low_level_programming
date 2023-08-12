#include <stdio.h>

/**
 * main - start point
 *
 * prints lowercase alphabet with putchar function
 *
 * Return: 0 (Success)
 */
int main(void)
{
int digit = 48;
while (digit <= 102)
{
putchar(digit);
if (digit == 57)
digit += 39;
digit++;
}
putchar('\n');
return (0);
}
