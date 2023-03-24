#include <stdio.h>
#include <math.h>

/**
 * main - prime fatocrization
 * Return: always 
 */
 
int main()
{
long n = 612852475143;
long i;

while (n % 2 == 0)
{
printf("%d ", 2);
n = n / 2;
}
for (i = 3; i <= sqrt(n); i = i + 2)
{
while(n % i == 0)
{
printf("%ld ", i);
n = n / i;
}
}
if (n > 2)
{
printf("%ld", n);
}
putchar('\n');
return (0);
}
