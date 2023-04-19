#include "3-calc.h"

/**
 * main - performs simple operations on two integers
 * @argc: number of command line arguments
 * @argv: array containing the command line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	f = get_op_func(argv[2]);

	if (f == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	result = f(num1, num2);
	printf("%d\n", result);

	return (0);
}
