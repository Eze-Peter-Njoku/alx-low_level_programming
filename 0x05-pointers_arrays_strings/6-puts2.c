#include "main.h"
#include <stdio.h>

/**
* puts2 - prints other character of a string
* @str: string to prints the chars from
*/

void puts2(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
