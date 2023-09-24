#include "main.h"
/**
 * _puts - start of my function
 * @str: character
 * Description: prints length of tring
 * Return: void
*/
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar (str[i]);
	}
	_putchar('\n');
}
