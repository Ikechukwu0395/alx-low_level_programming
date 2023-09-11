#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* main- the starting of he program
 * Description:a program that assign a random number and checkes if its positive or negetive
 * return 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n >0){
printf("%d is positive\n", n);
}
else if (n ==0)
{
printf("%d is zero", n);
}
else
printf("%d is negative", n);
return (0);
}
