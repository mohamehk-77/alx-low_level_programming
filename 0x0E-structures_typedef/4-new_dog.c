#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - its new dog and start point
 * @name: 1
 * @age: 2
 * @owner: 3
 * Return: new pointer
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dogG = malloc(sizeof(dog_t));

	if (new_dogG == NULL)
	{
		free(new_dogG);
		return (NULL);
	}
	if (name != NULL)
	{
	new_dogG->name = strdup(name);
	if (new_dogG->name == NULL)
	{
		free(new_dogG);
		return (NULL);
	}
	}
	else
	{
		new_dogG->name = NULL;
	}
	if (owner != NULL)
	{
	new_dogG->owner = strdup(owner);
	if (new_dogG->owner == NULL)
	{
		free(new_dogG->name);
		free(new_dogG);
		return (NULL);
	}
	}
	else
	{
		new_dogG->owner = NULL;
	}
	new_dogG->age = age;
	return (new_dogG);
}
