#include <stdio.h>
//John Dela Cruz
int main(void){

    float price, discount, total;
    printf("==DLSU ARMOURY==");
    printf("\nEnter amount bought in DLSU Armoury: ");
    scanf("%f", &price);

    if (price >= 1, price <= 1500){
        discount = price * 0.15;
        total = price - discount;
        printf("\nYour discount is: %.2f", discount);
        printf("\nTotal Price: %.2f",total);
    }

    else if (price >= 1501, price <= 3500){
        discount = price * 0.20;
        total = price - discount;
        printf("\nYour discount is: %.2f", discount);
        printf("\nTotal Price: %.2f",total);
    }

    else if (price >= 3501, price <= 5000){
        discount = price * 0.25;
        total = price - discount;
        printf("\nYour discount is: %.2f", discount);
        printf("\nTotal Price: %.2f",total);
    }

    else {
        discount = price * 0.30;
        total = price - discount;
        printf("\nYour discount is: %.2f", discount);
        printf("\nTotal Price: %.2f",total);
    }

    return 0;
}
