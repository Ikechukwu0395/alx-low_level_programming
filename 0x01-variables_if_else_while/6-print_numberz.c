#include <stdio.h>
/**
* main - Entry of the program
* Description: Print all the letters except q and e
* Return:0
*/
int main(void)
{
char num;
for (num = 0; num < 10; num++)
{
putchar(num + '0');
}
putchar('\n');
return (0);
}
