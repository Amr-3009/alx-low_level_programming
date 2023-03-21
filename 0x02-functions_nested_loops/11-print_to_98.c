#include <stdio.h>

/**
 * print_to_98 - prints to 98
 * @n: input
 * Return: always
 */

void print_to_98(int n)
{

if (n == 98)
{
printf("%d\n", n);
}
else if (n < 98)
{
for (n = n; n <= 98; n++)
{
if (n != 98)
{
printf("%d, ", n);
}
else
{
printf("%d\n", n);
}
}
}
else if (n > 98)
{
for (n = n; n >= 98; n--)
{
if (n != 98)
{
printf("%d, ", n);
}
else
{
printf("%d\n", n);
}
}
}
}
