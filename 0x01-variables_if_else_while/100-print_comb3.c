#include <stdio.h>

/**
 * main - print
 * Return: always
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 8; i++)
	{
	for (j = i + 1; j <= 9; j++)
	{
	if (i != j)
	{
	putchar(i + 48);
	putchar(j + 48);
	if (i < 8 && j <= 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');

	return (0);
}
