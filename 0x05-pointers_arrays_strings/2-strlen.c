#include "main.h"

/**
 * _strlen - gets lenth of string
 * @s: string input
 * Return: always
 */

int  _strlen(char *s)
{
	int len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return len;
}
