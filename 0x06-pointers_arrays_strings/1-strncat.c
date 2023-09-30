#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 * @n: number of byte to be printed
 * Return: Pointer to the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *wholechar = dest;

	while (*dest)
	{
		dest++;
	}

	while (n > 0 && *src)
	{
		*dest++ = *src++;
		n--;
	}
	*dest = '\0';

	return (wholechar);
}
