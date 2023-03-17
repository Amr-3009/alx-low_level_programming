#include <stdio.h>

/**
 * main - prints
 * Return: Always
 */

int main(void)

{
	char lower, upper;

	for (lower = 'a'; lower <= 'z'; lower++)
	putchar(lower);

	for (upper = 'A'; upper <= 'Z'; upper++)
	putchar(upper);
	putchar('\n');

	return (0);
}
