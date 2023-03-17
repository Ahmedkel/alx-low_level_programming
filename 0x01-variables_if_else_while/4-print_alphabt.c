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
if ( io != 'q' && io != 'e')
putchar(io);
putchar('\n');
return (0);
}
