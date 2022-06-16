// This program demonstrates passing arguments to a function
// by a simple Philippine Peso to US Dollar conversion
#include <stdio.h>
#define PHP_USD 52.174553
// GLOBAL CONSTANTS:^^

double usd(double php);

int main(void){
    float owned_asset, money;
    owned_asset = 1000000.0f;
    //variable that declares the result
    money= usd(owned_asset);
    //pritnign the result
    printf("\n\nConverted Value: %lf ", money);
    return 0;
}


// This function converts php to usd
//return type + function name (INPUT PARAMETERS):
double usd(double php){
    return (php / PHP_USD); // returning the value 
     
}