#include <stdio.h>

/**
 * main - print
 * Return: always
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i <= 7; i++)
	{
	for (j = i + 1; j <= 8; j++)
	{
	for (k = i + 2; k <= 9; k++)
	{
	if (i != j && j != k)
	{
	putchar(i + 48);
	putchar(j + 48);
	putchar(k + 48);
	if (i == 7 && j == 8 && k == 9)
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
	}
	putchar('\n');

	return (0);
}
