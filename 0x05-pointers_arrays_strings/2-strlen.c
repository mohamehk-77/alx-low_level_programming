#include "main.h"
/**
 * _strlen - that returns the length of a string.
 * @s: sting input
 * Return: length of string
*/
int _strlen(char *s)
{
int counter;
for (counter = 0; *s != '\0'; s++)
++counter;
return (counter);
}
