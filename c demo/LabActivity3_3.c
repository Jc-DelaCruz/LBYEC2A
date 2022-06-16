#include <stdio.h>
#include <math.h> // To have the fucntion of square root
// 3. Input four numbers and work out their sum, average and sum of the squares of the numbers.
int main(){
    float input1, input2, input3, input4;
    float sum, average;
    float sqrt1, sqrt2, sqrt3, sqrt4, sumsqrt;
// Input
    printf("Input 4 numbers: \n");
    scanf("%f", &input1);
    scanf("%f", &input2);
    scanf("%f", &input3);
    scanf("%f", &input4);
// Process
    sum = input1 + input2 + input3 + input4;
    average = sum / 4;
    sqrt1 = sqrt(input1);
    sqrt2 = sqrt(input2);
    sqrt3 = sqrt(input3);
    sqrt4 = sqrt(input4);
    sumsqrt = sqrt1 + sqrt2 + sqrt3 + sqrt4;
// Output
    printf("SUM: %.2f ", sum);
    printf("\nAVERAGE: %.2f", average);
    printf("\nSQUARE ROOT OF ALL VALUES: %.2f", sumsqrt);
    return 0;
}