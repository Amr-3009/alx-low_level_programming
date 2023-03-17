#include <stdio.h>

/**
 * main - print
 * Return: always
 */

int main(void)
{
	char i, j;

	for (i = '0'; i <= '8'; i++)
	{
	for (j = '1'; j <= '9'; j++)
	{
	if (i != j)
	{
	putchar(i);
	putchar(j);
	if (i == '8' && j == '9')
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
