#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Copies a string with a specified maximum number of characters
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of characters to be copied
 * Return: Pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *original_dest = dest;

	while (*src && n > 0)
	{
		*dest++ = *src++;
		n--;
    }

	while (n > 0)
    {
		*dest++ = '\0';
		n--;
	}

	return (original_dest);
}
