#include <stdio.h>
/**
* main - Entry of the program
* Description: prints all possible combinations of single-digit numbers.
* Return:0
*/
int main(void)
{
int num;
for (num = 0; num < 10; num++)
{
putchar(num + '0');
putchar(',');
putchar('\t');
}
return (0);
}
