#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src
 * @dest: char type string
 * @src: char type string
 * Return: pointer to "dest
*/
char *_strcpy(char *dest, char *src)
{
int Z = -1;
do {
Z++;
*(dest + Z) = *(src + Z);
} while (*(src + Z) != '\0');
return (dest);
}
