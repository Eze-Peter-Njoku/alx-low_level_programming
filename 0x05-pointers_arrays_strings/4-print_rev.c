#include "main.h"
#include <stdio.h>

/**
* print_rev - printing strings in reverse
* @s: string to be reversed
*/

void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	s--;

	while (len > 0)
	{
		putchar(*s);
		s--;
		len--;
	}
	putchar('\n');
}
