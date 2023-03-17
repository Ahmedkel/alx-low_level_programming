#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry Point
 * Return: 0 (Success)
 */
int main(void)
{
int io;
for (io = 'a' ; io <= 'z' ; io++)
putchar(io);
for (io = 'A' ; io <= 'Z' ; io++)
putchar(io);
putchar('\n');
return (0);
}
