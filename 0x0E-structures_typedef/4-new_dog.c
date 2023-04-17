#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: input string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s++))
		len++;
	return (len);
}

/**
 * _strcpy - copies a string from src to dest
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while ((*p++ = *src++))
	return (dest);
}

/**
 * new_dog - creates a new dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog struct, or NULL if malloc fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *new_owner;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_name = malloc(_strlen(name) + 1);
	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_owner = malloc(_strlen(owner) + 1);
	if (new_owner == NULL)
	{
		free(new_name);
		free(new_dog);
		return (NULL);
	}

	_strcpy(new_name, name);
	_strcpy(new_owner, owner);

	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;

	return (new_dog);
}
