#include "main.h"
/**
 * _strcpy - start of my function
 * @dest: 1st integer
 * @src: 2nd integer
 * Description: copies the string pointed to by src
 * Return: void
*/

char *_strcpy(char *dest, char *src)
{
	char *final = dest;
int i = 0;
	while (src[i] != '\0')
{
	*dest = *src;
		src++;
		dest++;
}
*dest = '\0';

	return (final);

}
