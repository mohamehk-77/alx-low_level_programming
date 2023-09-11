#include "dog.h"
#include <stdio.h>
/**
 * init_dog - that initialize a variable of type struct dog
 * @d: 1
 * @age: 2
 * @name: 3
 * @owner: 4
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
