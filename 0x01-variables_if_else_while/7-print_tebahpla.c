#include <stdio.h>
/**
* main - Entry of the program
* Description: prints all the alphabet backward,
* Return:0
*/
int main(void)
{
char alph;
for (alph = 'z'; alph >= 'a'; alph--)
{
putchar(alph);
}
putchar('\n');
return (0);
}
