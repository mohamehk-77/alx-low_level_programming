#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input 1
 * @s2: input 2
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
char *conct;
int y, l;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

y = l = 0;
while (s1[y] != '\0')
y++;
while (s2[l] != '\0')
l++;
conct = malloc(sizeof(char) * (y + l + 1));

if (conct == NULL)
return (NULL);
y = l = 0;
while (s1[y] != '\0')
{
conct[y] = s1[y];
y++;
}

while (s2[l] != '\0')
{
conct[y] = s2[l];
y++, l++;
}
conct[y] = '\0';
return (conct);
}
