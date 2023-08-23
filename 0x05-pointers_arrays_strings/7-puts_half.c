#include "main.h"
#include <stdio.h>

/**
* puts_half - prints half of a string followed by \n
* @str: string to be printed
*/

void puts_half(char *str)
{
	int len, n, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			putchar(str[i]);
		}
	}
	else
	{
		for (n = (len - 1) / 2; n < len - 1; n++)
		{
			putchar(str[n + 1]);
		}
	}
	putchar('\n');
}
