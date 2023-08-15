#include "main.h"
/**
 * print_alphabet_x10 - 10 times the alphabet in lowercase
*/
void print_alphabet_x10(void)
{
char ch;
int puts;

for (puts = 0; puts < 10; puts++)
{
for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
_putchar('\n');
}
_putchar('\n');
}
