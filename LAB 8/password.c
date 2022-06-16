#include <stdio.h>
#include <string.h>
#include <conio.h>
#define LOGIN 20
#define SIZE 50
#define PASSWORD "password123"
#define USERNAME "username123"

// Author: John Dela Cruz : Date Accompplished 06/07/22 : 5:26pm

int main()
{
    int i;
    char name[SIZE], course[SIZE], id[SIZE], addy[SIZE], birthday[SIZE];
    char user[LOGIN];

    printf("-----------------------------");
    printf("\n\nUsername: ");
    scanf("%[^\n]%*c", user);
    char pw[LOGIN];
    printf("Password: ");
    do
    {
        pw[i]=getch(); //masking the password with *
        printf("*");
        i++;
    }
    while(pw[i-1]!='\r');
    pw[i-1]='\0';
    
    if (strcmp(user, USERNAME) == 0 && strcmp(pw, PASSWORD) == 0)
    {
        puts("\n\n--------VALID--------");
        printf("\nEnter your name: ");
        scanf("%[^\n]%*c", name);
        printf("Enter your Degree Program: ");
        scanf("%[^\n]%*c", course);
        printf("Enter your student ID: ");
        scanf("%[^\n]%*c", id);
        printf("Enter your address: ");
        scanf("%[^\n]%*c", addy);
        printf("Enter your birthday: ");
        scanf("%[^\n]%*c", birthday);

        printf("-----------------------------");
        printf("\n\nHello %s!", name);
        printf("\n\n%s's Profile:\n", name);

        printf("\nDegree Program: %s", course);
        printf("\nStudent ID no: %s", id);
        printf("\nAddress: %s", addy);
        printf("\nBirthday: %s", birthday);
    }
    else
    {
        puts("\n--------INVALID Please Try Again--------\n\n");
        main();
    }
    return 0;
}