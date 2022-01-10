#include <stdio.h>

int main(void)

{
    int x[4] = {4, 3, 2, 1};

    printf("%u\n", x[1]);
    
    printf("%u\n", *x);

    printf("%u\n", *(x+2));

    printf("%d\n", (*x)+2);

    // printf("%u\n", *x[3]);

    // printf("%u\n", x[4]); --> Unknown

    printf("%u\n", *(&(x[1]) + 1));

}
