#include "main.h"

/**
 * reverse_array - reverses arrays
 * @a: ip1
 * @n: ip2
 * Return: always
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
