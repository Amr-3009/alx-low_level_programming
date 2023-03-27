#include <stdio.h>

/**
 * print_array - print array
 * @a: input 1
 * @n: input 2
 */

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", *(a + i));
if (i != n - 1)
{
printf(", ");
}
}
printf("\n");
}
