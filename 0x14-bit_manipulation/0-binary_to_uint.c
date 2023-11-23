#include "main.h"

/**
* binary_to_uint - Entry point
* Description: Converts a binary number to an unsigned int
* @binaryString: Pointer to a string of 0 and 1 chars
* Return: The converted number
*/

unsigned int binary_to_uint(const char *binaryString)
{
	unsigned int digit = 0;

	unsigned int i = 0;

	/* Check if binaryString is NULL */
	if (!binaryString)
	{
		return (0);
	}
	/* Loop: gets the length of the binary string */
	while (binaryString[i] != '\0')
	{
		/* Checks if char is not 0 or 1 */
		if (binaryString[i] != '0' && binaryString[i] != '1')
		{
			return (0);
		}
		i++;
	}
	/* Get the decimal value of the binary string */
	i = 0;
	while (binaryString[i] != '\0')
	{
		/* Left shift the digit by 1 bit or space */
		digit <<= 1;
		if (binaryString[i] == '1')
		{
			digit += 1;
		}
		i++;
	}
	return (digit);
}

