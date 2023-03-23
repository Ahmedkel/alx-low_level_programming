#include "main.h"

/**
  * main - Prints a Fizz Buzz program
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int FizzBuzz;

	for (FizzBuzz = 0; FizzBuzz < 100; FizzBuzz++)
	{
		if (FizzBuzz % 3 == 0 && FizzBuzz % 5 == 0)
		{
			printf("FizzBuzz\n");
			continue;
		}
		else if (FizzBuzz % 3 == 0)
		{
			printf("Fizz\n");
			continue;
		}
		else if (FizzBuzz % 5 == 0)
		{
			printf("Buzz\n");
			continue;
		}
		printf("%d\n", FizzBuzz);
	}
	return (0);
}

