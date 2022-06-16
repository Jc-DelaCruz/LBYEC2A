#include <stdio.h>
#include <stdlib.h>

int main(void){

int x, m;

printf("==MULTIPLICATION TABLE==\n\n");
printf("%-5c |",'x');
for (x = 1; x <= 12 ; x++){
    printf("%-5d |", x);
}
printf("\n");
for (x = 1; x <= 13 ; x++){
    printf("%-5s |", "_____");
}
for (x = 1; x <= 12 ; x++)
{
    printf("\n%-5d |", x);

    for (m = 1; m <= 12; m++)
    {
        printf("%-5d |", x*m);
    }
    
}
    return 0;

}