#include "main.h"

/**
 * argstostr - concatenates all arguments of a program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to concatenated string
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len, total_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len])
			len++;
		total_len += len + 1;
	}

	str = malloc(sizeof(char) * total_len + 1);
	if (str == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			str[len] = av[i][j];
			len++;
			j++;
		}
		str[len] = '\n';
		len++;
	}
	str[len] = '\0';

	return (str);
}
