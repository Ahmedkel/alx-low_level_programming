#include "main.h"

/**
  * main - Prints a Fizz Buzz program
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int fizzbuzz;

	for (fizzbuzz = 0; fizzbuzz < 100; fizzbuzz++)
	{
		if (fizzbuzz % 3 == 0 && fizzbuzz % 5 == 0)
		{
			printf("fizzbuzz\n");
			continue;
		}
		else if (fizzbuzz % 3 == 0)
		{
			printf("fizz\n");
			continue;
		}
		else if (fizzbuzz % 5 == 0)
		{
			printf("buzz\n");
			continue;
		}
		printf("%d\n", fizzbuzz);
	}
	return (0);
}

