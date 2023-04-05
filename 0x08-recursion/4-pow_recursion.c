#include "main.h"

/**
* _pow_recursion - returns the value
*		of x raised to the power of y.
*
* @x: a base number.
* @y: the power.
*
* Return: the result of x raised to the power of y, or -1 if y is negative.
*/
int _pow_recursion(int x, int y)
{
	return (y < 0 ? -1 : y == 0 ? 1 : x * _pow_recursion(x,y-1));
}
