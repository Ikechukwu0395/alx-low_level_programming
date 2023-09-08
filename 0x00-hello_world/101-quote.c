#include <stdio.h>
/**
 * main -starting point of te program
 * Decription:  prints exactly and that piece of art is useful
 * "Dora Korpar, 2015-10-1"9, followed by a new line, to the standard error.
 * Return 1
 */
int main(void)
{
char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

fprintf(stderr, "%s", s);
return (1);
}
