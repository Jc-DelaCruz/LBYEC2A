#include <stdio.h>

void intro(); //function prototype
void input();

int main(void){ 
    // Calling your function in the main
    intro();
    input();
  
    return 0;
}

// This function simple prints Hello, World!

void intro(){ // defining the function // scope
    printf("\nHello, Human!\n");
    printf("Enter Name: ");
    printf("\nVoid -- tester\n");
}

void input(){
    char name[20];
    scanf("%s", &name);
    printf("\n\n==== Hello  %s! ====", name);
}