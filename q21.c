#include <stdio.h>

int main(void)

{
    unsigned char i = 60;
    unsigned char j = 80;
    unsigned char k = 200;
    unsigned char sum;

    sum = i+j;

    printf("%u\n", sum);

    sum = i+k;

    printf("%u\n", sum);
    
    sum = k+j;

    printf("%u\n", sum);
}
