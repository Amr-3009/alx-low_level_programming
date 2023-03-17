#include <stdio.h>

/**
 * main - print
 * Return: always
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		putchar('\n');
	}
	return (0);
}
