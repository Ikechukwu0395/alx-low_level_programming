#include "main.h"
/**
 * more_numbers - prints numbers from 0-9 except 3&4
 *
 * Description: using ASCII
 *
 * Return: none
 */

void more_numbers(void)
{
	int outer;
	int i;
	char a[23] = "0123456891011121314";

	for (outer = 48; outer <= 57; outer++)
{
		for (i = 0; i < 23; i++)
		{
			_putchar(a[i]);
		}
		_putchar('\n');
}
}
