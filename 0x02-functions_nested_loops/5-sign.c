#include "main.h"
int print_sign(int n);
/**
 * print_sign - Entry point
 * @n: The interget value
 * Return: 1 if true, 0 if false
 */

int print_sign(int n)
{
if (n > '0')
{
_putchar('+');
return (1);
}
else if ((n == '0') || (n < '0'))
{
_putchar('0');
return (0);
}
else
_putchar('-');
return (-1);
}
