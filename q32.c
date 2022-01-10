
#include <stdio.h>

int main(void)

{
unsigned char a=0x0D, b=0x03, c;
c = ~a; // (a)

printf("%04x\n", c); //Print as hex

c = a & b; // (b)

printf("%04x\n", c);

c = a | b; // (c)

printf("%04x\n", c);

c = a ^ b; // (d)

printf("%04x\n", c);

c = a >> 3; // (e)

printf("%04x\n", c);

c = a << 3; // (f)

printf("%04x\n", c);

c &= b; // (g)

printf("%04x\n", c);

}