#include "main.h"
/**
 * print_rev - start of my function
 * @str: character
 * Description: prints length of tring
 * Return: void
*/
void print_rev(char *str)
{
	int length = 0;
	int i;
	/* Find the length of the string */
	while (str[length] != '\0')
	{
		length++;
	}

    /* Print the string in reverse */
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
