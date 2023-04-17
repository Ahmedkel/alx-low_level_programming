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
	typedef struct dog {
		char *name;
		float age;
		char *owner;
		} dog;
}
