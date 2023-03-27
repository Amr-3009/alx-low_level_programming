#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - half string
 * @str: input
 */

void puts_half(char *str)
{
int len = strlen(str);
int half_len = (len + 1) / 2;
int i;

for (i = half_len; i < len; i++)
{
putchar(*(str + i));
}
putchar('\n');
}
