#include "main.h"

/**
 * print_diagonal - print diagonal
 * @n: input
 * Return: always
 */

void print_diagonal(int n)
{
	int d, s;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (d = 0; d < n; d++)
		{
			for (s = 0; s < d; s++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
