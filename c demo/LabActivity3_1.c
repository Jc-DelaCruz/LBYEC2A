#include <stdio.h>
// 1. Create a program that converts the input Peso into its equivalent US dollar, Russian Ruble, Saudi Riyal, and Japanese Yen exchange rates.
//  (please refer to www.xe.com (Links to an external site.) for the current exchange rates)
int main(){

    float php, usd, sar, yen; //set variable

    // input
    printf("Enter the amount of PHP to be converted:\n");
    scanf("%f", &php);

    // process = conversion
    usd = php / 52.17;
    sar = php / 13.91;
    yen = php / 0.412;

    // output
    printf("\nPHP to USD = %.3f  ", usd);    
    printf("\nPHP to SAR = %.3f ", sar);
    
    printf("\nPHP to YEN = %.3f ", yen);
    printf("\n\n -- Update: April 16, 2022 : 11:34P.M  --");

    return 0;
}