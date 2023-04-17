#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * init_dog - function that initialize a variable of type struct dog
 *
 * @d: struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = malloc(sizeof(char) * strlen(name));
		if (!d->name)
			exit(1);
		d->name = name;
		d->age = age;
		d->owner = malloc(sizeof(char) * strlen(owner));
		if (!d->owner)
			exit(1);
		d->owner = owner;
	}
}
