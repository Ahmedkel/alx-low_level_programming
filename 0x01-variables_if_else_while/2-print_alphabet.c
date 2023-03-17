#include <stdio.h>
/**
 * main - prints tha alphabet in lowercase
 *
 * Return: 0
*/
int main()
{
	char c;
	for (c = 'a'; c <= 'z'; ++c)
		putchar("%c", c);
	return 0;
}
