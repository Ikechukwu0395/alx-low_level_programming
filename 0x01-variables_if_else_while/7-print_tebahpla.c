#include <stdio.h>
/**
* main - Entry of the program
* Description: Print all the letters backward
* Return:0
*/
int main(void)
{
char alpha;
for (alpha = 'z'; alpha >= 'a'; alpha--)
{
putchar(alpha);
}
putchar('\n');
return (0);
}
