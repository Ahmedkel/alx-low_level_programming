#include <stdio.h>
/**
 * main - prints tha alphabet in lowercase
 *
 * Return: 0
*/

	int main(void)

	{
		char i = 'a';

		while (i <= 'z')
		{
			putchar(i);
			i++;
		}

		putchar('\n');

		return (0);
}
