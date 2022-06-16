#include <stdio.h>
#include <stdlib.h>

int main(void){
//variable declaration
int x, i; 

//intro
printf("==COUNTDOWN==");

// input
printf("\n\nInput a Number: ");
scanf("\n%d", &x);
printf("\n\nLift off in...\n");

// for-loop
for (i = x; i >= 0 ; i--){ // (starting value, condition, decrement)
    printf("\n%d", i);
}

    printf("\n\nBlast-Off !!!");
    return 0;

}