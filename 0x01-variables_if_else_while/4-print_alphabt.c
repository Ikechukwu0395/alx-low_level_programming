#include <stdio.h>
/**
* main - Entry of the program
* Description :Print all the letters except q and e
* Return:0
*/
int main(void)
{
char letters;
for (letters = 'a'; letters <= 'z'; letters++)
{
if (letters != 'q' && letters != 'e')
putchar(letters);
}
putchar('\n');
return (0);
}
