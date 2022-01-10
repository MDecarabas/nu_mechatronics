#include <stdio.h>

int main(void)

{
    int i = 33; 
    printf("Number    Ascii   \n");

    while (i != 128)
    {
        printf("  %d        %c\n", i, i);
        i++;
    }
}