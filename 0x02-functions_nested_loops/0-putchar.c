#include "main.h"
/**
 * main - a program that print by useing printf
 *
 * Return: (success) 0
*/
int main(void)
{
char alpha[] = "_putchar";

int put;

for (put = 0; put < 8; put++)
{
_putchar(alpha[put]);
}
_putchar('\n');
return (0);
}
