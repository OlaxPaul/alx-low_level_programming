#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a dog struct
 * @d: dog struct
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: Null Void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->ade = age;
	d->owner = owner;
}
