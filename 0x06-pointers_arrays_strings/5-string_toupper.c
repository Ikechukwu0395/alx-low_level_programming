#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase.
 * @str: array of string
 * Return: char
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)

{
	if ((str[i] >= 'a') && (str[i] <= 'z'))
	{
		str[i] = str[i] - ('a' - 'A');
	}
}
	return (str);
}
