#include "main.h"
 /**
* _sqrt_recursion - returns the natural square root of a number.
*@n: the number to calculate the square root.
*
* Return: the square root of n, or -1 if n does not have a natural square root.
*/
int _sqrt_recursion(int n)
{
	int i;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	i = _sqrt_recursion(n / 4) * 2;

	if (i * i > n)
		return (i - 1);
	else
		return (i);
}
