#include "main.h"

/**
 * print_binary - Entry point
 * Description: Prints the binary representation of a number
 * @m: Printed in binary format
 */

void print_binary(unsigned long int m)
{
	int i = 0;

	/* Locate position of the leftmost 1 in the binary string */
	while ((m >> i) > 1)
	{
		i++;
	}
	/* Prints the binary representation of the number */
	while (i >= 0)
	{
		if ((m >> i) & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		/* Ends the while loop to move to the next bit position towards the right */
		i--;
	}
}
