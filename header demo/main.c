#include "header.h"

int main(){

    int numbers[MAX_SIZE], result[MAX_SIZE];

    printf("Input 5 numbers: ");
    for (int i = 0; i < MAX_SIZE; i++)
    {
       scanf("%d", &numbers[i]);
    }

    display_array(numbers, MAX_SIZE);

       
        for (int i = 0; i < MAX_SIZE; i++)
    {
        result[i] = square(numbers[i]);
    }

    printf("\n The results are: \n");
    display_array(result, MAX_SIZE);

    return 0;
}