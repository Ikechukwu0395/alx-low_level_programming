#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - beginning of the program
 * Description: Print the last digit of the number stored in the variable
 * Return: 0
 */
int main(void)
{
int n, last;
srand(time(0));
n = rand() - RAND_MAX / 2;
last = n % 10;
printf("\n");
if (last > 5)
{
printf("Last digit of %d is %d and is greater than 5", n, last);
}
else if (last == 0)
{
printf("Last digit of %d is %d and is 0", n, last);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0", n, last);
}
return (0);
}

