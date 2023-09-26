#include "main.h"
/**
 * rev_string - start of my function
 * @s: character
 * Description: prints length of string in reverse
 * Return: void
*/
void rev_string(char *s);
{
	int length = 0;
	int i;
	/* Find the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}

    /* Print the string in reverse */
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
