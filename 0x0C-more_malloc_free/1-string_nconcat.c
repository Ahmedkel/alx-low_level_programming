#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Number of characters from s2 to use
 *
 * Return: Pointer to allocated memory containing the concatenated string
 */

char *string_nconcat(char *s1, char *s2, size_t n)
{
	size_t len1 = 0, len2 = 0, len = 0;
	char *concat = NULL;

	if (s1 != NULL)
		len1 = strlen(s1);

	if (s2 != NULL)
		len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	len = len1 + n + 1;

	concat = malloc(len * sizeof(char));

	if (concat == NULL)
		return (NULL);

	if (s1 != NULL)
		strcpy(concat, s1);
	else
		concat[0] = '\0';

	strncat(concat + len1, s2, n);

	concat[len - 1] = '\0';

	return (concat);
}
