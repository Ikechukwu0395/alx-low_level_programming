#include <stdio.h>
/**
* main - Entry of the program
* Description: Print all the letters backward
* Return:0
*/
int main(void)
{
char num;
for (num = 'z'; num >= 'a'; num--)
{
putchar(num);
}
putchar('\n')
return (0);
}
       
