#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - that defines info
 * @name: 1
 * @age: 2
 * @owner: 3
*/

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
