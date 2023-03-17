#include <stdio.h>
/**
 * main - Entry Point
 * Return: 0 (Success)
 */
int main(void)
{
char nuk[3];
for (int i = 0 ;i < 9 ; i++)
{
	for (int j = i + 1; j < 10; j++)
	{
		nuk[0] = i + '0';
		nuk[1] = j + '0';
		nuk[2] = '\n' ;
		for (int k = 0; k < 3; k++)
			{
			putchar(nuk[k]);
			}
		}
	}
return (0);
}
