#include <stdio.h>

/**
 * main - Entry point
 *
 * prints lowercase alphabet with putchar function
 *
 * Return: 0 (Success)
 */
int main(void)
{
char ch = 'z';
while (ch >= 'a')
{
putchar(ch);
ch--;
}
putchar('\n');
return (0);
}
