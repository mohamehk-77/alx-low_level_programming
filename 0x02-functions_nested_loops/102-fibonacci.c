#include "main.h"
/**
 * main - start point
 * Description: print  the first 50 Fibonacci numbers
 * starting with 1 and 2, followed by a new line
 * Return: Always 0 (success)
*/

int main(void)
{
int count;
unsigned long f = 0, h = 1, sum;
for (count = 0; count < 50; count++)
{
sum = f + h;
printf("%lu", sum);
f = h;
h = sum;
if (count == 49)
printf("\n");
else
printf (", ");
}
return (0);
}
