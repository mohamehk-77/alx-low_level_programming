#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: its a char
 * Return: 0
 */
char *_strdup(char *str)
{
char *ptr;
int y, i = 0;

if (str == NULL)
return (NULL);
y = 0;
while (*(y + str) != '\0')
y++;

ptr = malloc(sizeof(char) * (i + 1));

if (ptr == NULL)
return (NULL);

for (i = 0; *(i + str); i++)
*(y + ptr) = *(i + str);

return (ptr);
}
