#include <stdio.h>

/**
 * main - print
 * Return: always
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 98; i++)
	{
	for (j = i + 1; j <= 99; j++)
	{
	if (i != j)
	{
	putchar((i / 10) + 48);
	putchar((i % 10) + 48);
	putchar(32);
	putchar((j / 10) + 48);
	putchar((j % 10) + 48);
	if (i == 98 && j == 99)
	{
	break;
	}
	else
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
