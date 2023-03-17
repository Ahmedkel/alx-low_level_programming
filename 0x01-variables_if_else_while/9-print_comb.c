#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry Point
 * Return: 0 (Success)
 */
int main(void)
{
int io;
for (io = 0 ; io <= 9 ; io++)
{
putchar(io + '0');
if (io < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
