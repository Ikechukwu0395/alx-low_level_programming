#include "main.h"
/**
 * _strlen - start of my function
 * @s: character
 * Description: prints length of tring
 * Return: void
*/

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
{
	length++;

}
	return (length);
}
