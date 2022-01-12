#include <stdio.h>
#include <string.h>
#define MAXLENGTH 100 // max length of string input

void getString(char *str); // helper prototypes
void printResult(char *str);
int greaterThan(char ch1, char ch2);
void swap(char *str, int index1, int index2);

int main(void)

{
    int len, n, i, j;         // length of the entered string, iteration of algorithm, i & j to be used for nested loops
    char str[MAXLENGTH];      // input should be no longer than MAXLENGTH
    getString(str);

    len = strlen(str);        // get length of the string, from string.h
    n = len - 1;              //counting starts from 0

    //  nested loops here to put the string in sorted order

    for (i = 0; i < len - 1; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (greaterThan(str[j], str[j + 1]) == 1) //if swap returns false then execute

            {
                swap(str, j, j + 1);                  //do a swap
            }
        }
        n--; // iteration counts down
    }

    printResult(str); //print the final result

    return (0);
}

void getString(char *str)

//get a string using scanf function

{

    printf("Dear sir or madam, may I please have a string\n:");
    scanf("%99s", str);
}

void printResult(char *str)

//print the result

{

    printf("%s\n", str);
}

int greaterThan(char ch1, char ch2)

// simple greater than function showing if a char is greater or lesser than. If char1 is greater than char2 return false

{
    if (ch1 < ch2)
    {
        return 0;
    }

    else
    {
        return 1;
    }
}

void swap(char *str, int index1, int index2)

// does a swap operation

{
    str[index1] = str[index1] + str[index2]; //Moves index 1 up
    str[index2] = str[index1] - str[index2]; //Moves index 2 down
    str[index1] = str[index1] - str[index2]; //Moves index 1 back down
}