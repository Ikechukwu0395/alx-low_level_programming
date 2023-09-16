#include "main.h"
/**
 * print_alphabet_x10 - beginning of the function
 * Description: prints alphabet 10 times
 * return void
 *
*/
void print_alphabet_x10(void)
{
int line;
int alphabet;

for (line = 1; line <= 10; line++)
{
for (alphabet = 0; alphabet <= 25; alphabet++)
{
_putchar('a' + alphabet);
}
_putchar('\n');
}
}
