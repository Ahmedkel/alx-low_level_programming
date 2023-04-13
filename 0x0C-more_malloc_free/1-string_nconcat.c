#include "main.h"

/** 
 * string_nconcat - Concatenates two strings 
 * @s1: First string 
 * @s2: Second string 
 * @n: Number of characters from s2 to use 
 * Return: Pointer to allocated memory containing the concatenated string 
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{ 

	size_t len1 = 0;
	size_t len2 = 0;
	size_t len = 0;

	if (s1 != NULL)
		len1 = strlen(s1);
	if (s2 != NULL)
		len2 = strlen(s2);

	len = len1 + n + 1;
  
	char *p = malloc(len * sizeof(char));
    
	if (p == NULL)
		return NULL;

	strcpy(p, s1);

	strncpy(p + len1, s2, n);

	p[len - 1] = '\0';

	return (p); 
}
