#include <stdio.h>
// mi to km == 1 mi= 1.6093440 km
// kg to lb == 1kg = 2.205 lb divide**
// tf to tr == Recall Tf = Tr - 459.67 deg R
                   
int main(void){
    // 1. Declare variables
    int choice;
    float convert, result;
    // Your code here! (More declarations)
    // 2. Display the menu
    printf("========================\n"
    "     MENU Options\n"
    "========================\n"
    "(1) Conversions from miles to km\n"
    "(2) Conversions from pounds to kg\n"
    "(3) Conversions from deg. F to deg. R\n");
    // 3. Prompt the user and scan value
    printf("\nEnter choice: \n");
    scanf("%d", &choice);
    
    // 4. Decision
    switch (choice){
        case 1:
            printf("You chose conversions from miles to km");
            printf("Input value of miles: ");
            scanf("%f", &convert);

            result = convert * 1.6093440;
            printf("Miles to KM == %.2f", result);
            break;
        case 2:
            printf("You chose conversions from pounds to kg");
            printf("Input value of pounds: ");
            scanf("%f", &convert);

            result = convert / 2.205;
            printf("LB to KG == %.2f", result);
            break;
        case 3:
            printf("You chose conversions from deg. F to deg. R");
            printf("Input value of def. F: ");
            scanf("%f", &convert);

            result = convert + 459.67;
            printf("LB to KG == %.2f", result);
            break;
        default:
            printf("This is an invalid option!");
    }
    // Exit
    return 0;
}