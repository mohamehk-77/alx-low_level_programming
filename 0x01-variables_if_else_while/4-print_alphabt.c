#include <stdio.h>

/**
 * main - start point
 *
 * prints alphabet with putchar function & expect e,q
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
if (ch == 'q' || ch == 'e')
ch++;
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
