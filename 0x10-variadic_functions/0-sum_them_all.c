#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - computes the sum of all its parameters
 * @n: the number of parameters
 * @...: the parameters to sum up
 *
 * Return: the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list args;
	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}

	for (unsigned int i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
