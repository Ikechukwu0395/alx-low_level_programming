#include <stdio.h>
/**
 * swap_int - start of my function
 * @a: 1st integer
 * @b: 2nd integer
 * Description: pointss to a variable
 * Return: void
*/

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
