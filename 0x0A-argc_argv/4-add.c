#include "main.h"
#include <ctype.h>
/**
 * main - Entry Point.
 *
 * Description: adds positive numbers.
 *
 * @argc: number of args
 * @argv: an array of args
 *
 * Return: 0 if success otherwise 1
 */
int main(int argc, char *argv[])
{
	int sum = 0, arg, j;

	for (arg = 1; arg < argc; arg++)
	{
		for (j = 0; argv[arg][j] != '\0'; j++)
			if (!isdigit(argv[arg][j]))
			{
				printf("Error\n");
				return (1);
			}
		sum += atoi(argv[arg]);
	}
	printf("%d\n", sum);
	return (0);
}
