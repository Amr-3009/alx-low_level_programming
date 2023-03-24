#include "main.h"

/**
 * _isupper - checks for upper case
 * @c: input
 * Return: always
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
