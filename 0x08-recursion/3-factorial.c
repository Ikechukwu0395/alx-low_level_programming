#include "main.h"

/**
 * factorial - Entry point
 * Description: prints the factorial
 * @n: integer
 * Return: int
 */

int factorial(int n)
{
		if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
	return (1);
	}
		else
	{
		return (n * factorial(n - 1));
	}
}
