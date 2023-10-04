#include "main.h"

/**
 * _sqrt_recursion - Entry point
 * Description: returns square root
 * @n: integer
 * Return: int
 */
int _sqrt_recursion(int n)
{
	int sqrt;
	int square;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	sqrt = _sqrt_recursion(n / 4) * 2;
	square = sqrt * sqrt;

	if (square > n)
		return (sqrt - 1);
	else
		return (sqrt);
}
