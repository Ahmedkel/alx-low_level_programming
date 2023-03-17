#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry Point
 * Return: 0 (Success)
 */
int main(void)
{
int io;
char c;
for (io = 48 ; io <= 57 ; io++)
putchar(io);
for (c = 'a' ; c <= 'f' ; c++)
putchar(c);
putchar('\n');
return (0);
}
