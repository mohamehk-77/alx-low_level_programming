#include "main.h"
/**
 * main - start point
 * Description: print  the sum of
 * even-vulued fibonacci sequence not exceed 4million
 * Return: Always 0 (success)
*/

int main(void)
{
unsigned long f = 0, h = 1, sun;
float total_sum;
while (1)
{
sum = f + h;
if (sum < 4000000)
break;
if ((sum % 2) == 0)
total_sum += sun;
f = h;
h = sum;
}
printf ("%.of\n", total_sum);
return (0);
}
