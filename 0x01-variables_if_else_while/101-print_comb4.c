#include <stdio.h>
/**
 * main - Entry Point
 * Return: 0 (Success)
 */
int main(void)
{
int n, p, m;
for (n = 0 ; n <= 8 ; n++)
{
for (p = n + 1 ; p <= 9 ; p++)
{
for (m = m + 1 ; m <= 9 ; m++)
{
putchar('0' + n);
putchar('0' + p);
putchar('0' + m);
if (n < 7)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
