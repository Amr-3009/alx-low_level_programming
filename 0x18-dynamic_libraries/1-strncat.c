#include <stdio.h>
#include "main.h"

/**
 * _strncat - string copy
 * @dest: input 1
 * @src: input 2
 * @n: input 3
 * Return: always
 */

char *_strncat(char *dest, char *src, int n)
{
int i;

char *dest_end = dest;
while (*dest_end != '\0')
{
dest_end++;
}
i = 0;
while (i < n && *src != '\0')
{
*dest_end = *src;
dest_end++;
src++;
i++;
}
*dest_end = '\0';
return (dest);
}
