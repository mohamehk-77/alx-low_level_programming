#include <stdio.h>
#include "dog.h"
/**
 * print_dog - entry point
 * @d: pointer
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("Name: ");
		if (d->name != NULL)
		{
			printf("(nil)\n");
		}
		else
		{
			printf("%s\n", d->name);
		}
		printf("Age: %f\n", d->age);
		printf("Owner: ");
		if (d->owner == NULL)
		{
			printf("(nil)\n");
		}
		else
		{
			printf("%s\n", d->owner);
		}
	}
}
