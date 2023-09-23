#include "main.h"
/**
 * print_numbers - Entry point
 * Description: prints from 0 till 9
 * @perimeter: void
 * Return: void
 */

void print_numbers(void)
{
	char a[11] = "0123456789$";
	int i;

	for (i = 0; i <= 12; i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
}
