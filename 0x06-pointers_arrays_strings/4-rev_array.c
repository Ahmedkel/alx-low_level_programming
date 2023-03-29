#include "main.h"
/**
 * reverse_array - Entry Function
 * @a: int
 * @n: int
 */
void reverse_array(int *a, int n)
{
int i, rev;
for (i = 0 ; i < n / 2 ; i++)
{
	rev = a[i];
	a[i] = a[n - i - 1];
	a[n - i - 1] = rev;
}
}
