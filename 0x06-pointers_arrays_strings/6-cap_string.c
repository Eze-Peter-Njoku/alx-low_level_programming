#include "main.h"

/**
* *cap_string - capitalizing alphabets
* @str: input value
* Return: str
*/

char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			if (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
			str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
			str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
			str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
			 str[i - 1] == '}')

			str[i] -= 32;
		}
	i++;
	}
	return (str);
}
