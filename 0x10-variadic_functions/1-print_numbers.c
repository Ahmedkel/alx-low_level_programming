#include <stdarg.h>
#include <stdio.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;

va_list args;
va_start(args, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));
if (i != n - 1 && separator != NULL)
{
printf("%s", separator);
}
}

va_end(args);
printf("\n");
}
