#include <stdio.h>
/**
 * print_array - start of my function
 * @a: 1st integer
 * @n: 2nd integer
 * Description: prints an array of integers
 * Return: void
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
