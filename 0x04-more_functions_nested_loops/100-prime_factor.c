#include <stdio.h>
#include <math.h>

/**
 * main - prime fatocrization
 * Return: always
 */

int main(void)
{
long n = 612852475143;
long i;
long largest;

for (i = 1; i <= sqrt(n); i++)
{
if (n % i == 0)
{
largest = n / i;
}
}
printf("%ld\n", largest);
return (0);
}
