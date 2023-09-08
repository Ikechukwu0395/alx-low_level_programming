#include <stdio.h>
/**
 * main -starting point of my program
 * Description: prints the size of various types on the computer
 * it is compiled and run on.
 * Return:0
 */
int main(void)
{
printf("Size of char: %zu bytes\n", sizeof(char));
printf("Size of short: %zu bytes\n", sizeof(short));
printf("Size of int: %zu bytes\n", sizeof(int));
printf("Size of long: %zu bytes\n", sizeof(long));
printf("Size of float: %zu bytes\n", sizeof(float));
return (0);
}

