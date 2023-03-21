#include "main.h"

/**
 * _abs - print abs
 * @n: input
 * Return: always
 */

int _abs(int n)
{
	if (n < 0)
	{
	int abs_val;
	abs_val = n * -1;
	_putchar(abs_val + '0');
	return (abs_val);
	}
	return (n);
}
