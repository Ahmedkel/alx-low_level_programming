#include "main.h"
/**
 * is_prime_number - checks if a number is a prime number
 * @n: the number to check
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);

	return (is_prime(n, 2));
}

/**
 * is_prime - helper function for is_prime_number
 * @n: the number to check
 * @i: the divisor to check
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (is_prime(n, i + 1));
}
