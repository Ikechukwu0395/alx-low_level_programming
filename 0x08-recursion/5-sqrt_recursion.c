#include "main.h"

/**
 * _sqrt_recursion - Entry point
 * Description: returns square root
 * @n: integer
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	int sqrt = _sqrt_recursion(n / 4) * 2;
	int square = sqrt * sqrt;

	if (square > n)
		return (sqrt - 1);
	else
		return (sqrt);
}
