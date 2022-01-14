// Quiz 1 for ME333
#include <stdio.h>
#include <string.h>



typedef struct{

    int id;
    char brand[50];
    float miles[10];

} car;

void milesReference(car car1, car *rp);

int main(void){

// q1)
// unsigned char a = 175; unsigned char b = 100;  
// float c = a + b; 
// printf("%f\n", c);

// q4)
// unsigned char q[5] = {2, 12, 'j', 128, 10}; 
// unsigned char a; int b; 
//a 12
// a = *(q+1); 
// printf("%u\n", a);
// return 0;

//b  512 something to do with the 4th integer
// b = ((int)q[3]) << 2; 
// printf("%d\n", b);

//c, k
// a = q[q[0]]+1;  
// printf("%u\n", a);

//d, 256
// b = q[3]*2; 
// printf("%d\n", b);

//e, unknown
// b = q[4] / q[5]; 
// printf("%d\n", b);

//q5)

// int n;
// n = 97;

// while (n != 123){

// printf("%c\n", n);
// ++n;

// }

//q6)

// struct car {

//     int id;
//     char brand[50];
//     float miles[10];

// };

// struct car car1; 

// car1.id = 1;
// car1.brand[0] = 0;

// for (int i = 0; i < 10; i++)
// {
// car1.miles[i] = 0.0;
// }

//q7)
    // printf("What's the car brand?:\n");
    // scanf("%49s", car1.brand);
    // printf("%s", car1.brand);


//q8) 
// car car1, rp;
// milesReference(car1, &rp);
// printf("%f\n", rp.miles[9]);


//q9) 

char str[100];      // input should be no longer than MAXLENGTH
int shift, len , i;
printf("Give me some characters please\n");

scanf("%s %d\\n", str, &shift);
if (shift > 8 || shift < 1)
{
    scanf("%s %d\\n", str, &shift);
}

else {
printf("%s\n", str);
printf("%d\n", shift);
len = strlen(str);

for (i = 0; i < len; i++)
{
    str[i] = str[i]+shift;
}
printf("%s\n", str);
}
return 0;

}




//q8)
// void milesValue(car car1){
// car1.miles[0] = 1;
// for (int i = 1; i < 10; i++)
// {
// car1.miles[i] = 2*car1.miles[i-1];
// }
// // printf("%f", car1.miles);
// }



// void milesReference(car car1, car *rp){
// float miles = 1;
// for (int i = 0; i < 10; i++)

// {
// rp->miles[i] = miles;
// miles = 2*miles;

// // printf("%f\n", car1.miles[9]);


// }
// // printf("%f", car1.miles);
// }

