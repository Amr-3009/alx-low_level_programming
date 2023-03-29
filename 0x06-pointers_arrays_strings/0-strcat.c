#include <stdio.h>
#include "main.h"

/**
 * strcat - concatnate
 * @dest: input 1
 * @src: input 2
 * Return: always
 */

char *_strcat(char *dest, char *src)
{
char *dest_end = dest;
while (*dest_end != '\0')
{
dest_end++;
}
while (*src != '\0')
{
*dest_end = *src;
dest_end++;
src++;
}
*dest_end = '\0';
return (dest);
}
