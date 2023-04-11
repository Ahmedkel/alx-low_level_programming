#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: the string to be duplicated
 *
 * Return: NULL if str is NULL, or if insufficient memory was available.
 *         Otherwise, returns a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
    char *dup_str;

    if (str == NULL)
	    return NULL;

	dup_str = malloc(sizeof(char) * (strlen(str) + 1));

    if (dup_str == NULL)
	    return NULL;

    strcpy(dup_str, str);

    return dup_str;
}
