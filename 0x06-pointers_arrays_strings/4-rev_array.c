#include "main.h"

/**
 * reverse_array - reverse content of array
 * @a: array of integers
 * @n: no. of elements in array
 *
 * Return: none
 */
#include <stdio.h>

void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
    /* Swap elements at start and end indices */

		int temp = a[start];

		a[start] = a[end];
		a[end] = temp;

    /* Move the indices towards the middle */
		start++;
		end--;
	}
}
