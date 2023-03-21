#include "main.h"

/**
 * main - check the code .
 * @c : parameter
 * Return: 1 if c is lower .
 * Return: 0 if c is upper .
 */
int _islower(int c)
{
 if ( c >= 'a' && c <= 'z')
 {
	 return(1);
 }
 else
 {
	 return(0);
	}
	_putchar('\n');
}
