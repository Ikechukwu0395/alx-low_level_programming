#include "main.h"


/**
 * _print_rev_recursion - start of my function
 * Description:  a function that prints a string,
 * @s: character pointer
 * Return: void
*/

void _print_rev_recursion(char *s)
{

	if (*s == '\0')
	{
		return;
	}
	else
	_print_rev_recursion(s + 1);
		_putchar(*s);
}
