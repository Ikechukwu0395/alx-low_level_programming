#include "main.h"
int _isalpha(int c);
/**
 * _isalpha - Entry point
 * @c: The interget value
 * Return: 1 if true, 0 if false
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}