#include "main.h"
/**
 * _puts_recursion - start of my function
 * Description:  a function that prints a string,
 * @s: character pointer
 * Return: void
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	else

		_putchar(*s);
	_puts_recursion(s + 1);
}
