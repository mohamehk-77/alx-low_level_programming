#include "main.h"
/**
 * *_strcat - that concatenates two strings
 * @dest: input string 1
 * @src: input string 2
 * Return: dest
*/
char *_strcat(char *dest, char *src)
{
int a, s;
a = 0;
while (*(dest + a) != '\0')
{
a++;
}
s = 0;
while (*(src + s) != '\0')
{
*(dest + a) = *(src + s);
a++;
s++;
}
*(dest + a) = '\0';

return (dest);
}
