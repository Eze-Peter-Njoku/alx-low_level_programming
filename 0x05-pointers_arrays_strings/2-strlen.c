#include "main.h"
#include <string.h>

/**
* _strlen - returns the length of a string
* @s: parameter of string
* Return: len
*/

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
