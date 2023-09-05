#include "main.h"
/**
 * *create_array - that creates an array of chars
 * @size: The size of the character
 * @c: The character with which to initialize the array.
 * Return: pointer to the array, or (NULL) if it fails
*/
char *create_array(unsigned int size, char c)
{
char *ptr;
unsigned int i;

ptr = malloc(sizeof(char) * size);
if (size == 0 || ptr == NULL)
return (NULL);

for (i = 0; i < size; i++)
ptr[i] = c;
return (ptr);
}
