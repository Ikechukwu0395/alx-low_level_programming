#include <stdio.h>

int main() {
   int outer;
    int i;
    char a[11] = "012345689";
    //for (outer = 48; outer <= 57; outer++)
//    {
        for (i = 0; i < 11; i++)
        
            putchar(a[i]);
        
  //  }
putchar('\n');
    return 0;
}