#include "main.h"

/**
* main - entry point
* @argc: number of arguments passed to the program
* @argv: array of arguments passed to the program
* Description: This program calculates the minimum number of coins required
* to add up to a given amount of cents, using 25, 10, 5, 2, and 1 cent coins.
* Return: 0 on success, 1 on error
*/

int main(int argc, char *argv[])
{
	int num, result, i;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	result = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= coins[i])
		{
			result++;
			num = num - coins[i];
		}
	}
	printf("%d\n", result);
	return (0);
}
