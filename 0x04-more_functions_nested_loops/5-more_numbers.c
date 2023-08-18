#include "main.h"
/**
 * more_numbers - print ten times the numbers from 0 - 14
 * use _putchar fanctions
 * Return: Aways 0 (success)
*/
void more_numbers(void)
{
int num, rows, conut;

for (rows = 1; rows <= 10; rows++)
{
for (conut = 0; conut <= 14; conut++)
{
num = conut;
if (conut > 9)
{
_putchar(1 + 48);
num = conut % 10;
}
_putchar(num + 48);
}
_putchar('\n');
}
}
