#include "main.h"

/**
 * print_diagonal - prints a line n times long
 * @n: number of lines
 * description: prints a line n times long using _putchar
 */

void print_diagonal(int n)
{
    int i = 0;
    int a;
    while (i < n)
    {
        a = i;
        while (a--)
            putchar(' ');
        putchar('\\');
        putchar('\n');
        i++;
    }
    if (n <= 0)
        putchar('\n');
}

