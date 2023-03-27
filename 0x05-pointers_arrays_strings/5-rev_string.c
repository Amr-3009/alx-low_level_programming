#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverse
 * @s: input
 * Return: always
 */

void rev_string(char *s)
{
	int len = strlen(s);
	int i;

	for (i = 0; i < len / 2; i++)
	{
		char temp = *(s + i);

		*(s + i) = *(s + len - 1 - i);
		*(s + len - 1 - i) = temp;
	}
}
