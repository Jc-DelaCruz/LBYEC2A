#include <stdio.h>
#include <stdlib.h>

int main(void){
//declaration of variables

int x; // input variable
int total = 0; // total or summation
int i = 1; // starting value / placeholder

//print and input
printf("==SUMMATION==");
printf("\n\nEnter a Value: ");
scanf(" %d", &x);
printf("\n");

// it prints out value i (or 1) until the value of x
while(i <= x)
{
    total += i; //Adds every value of i
    printf("%d\n", i );
    i++; // increment - to ascending order
}
    //print the total / summation
    printf("\nSUMMATION IS: %d", total);
    return 0;
}