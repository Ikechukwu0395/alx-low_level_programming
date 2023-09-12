#include <stdio.h>
/**
*main - Entry point
*Description:prints the alphabet in lowercase and uppercase
*Return: 0
*/
int main(void)
{
char n1, n;
for (n1 = 'a'; n1 <= 'z'; n1++)
{
putchar(n1);
}
for (n = 'A'; n <= 'Z'; n++)
{
putchar (n);
}
putchar ('\n');
return (0);
}
