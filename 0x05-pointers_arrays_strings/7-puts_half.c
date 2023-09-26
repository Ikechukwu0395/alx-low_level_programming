#include "main.h"
/**
 * puts_half - Entry point
 * Description: prints the other half string
 * @str: character
 * Return: void
 */
void puts_half(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	int half;
	int i;

	half = length / 2;

	for (i = half; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
