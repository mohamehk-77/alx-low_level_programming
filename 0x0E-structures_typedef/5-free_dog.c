#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - starting point
 * @d: pointer
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
