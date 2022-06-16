#include <stdio.h>
#include <conio.h>
#include <string.h>
#define size 50

int main(void)
{
    char username[size];
    char password[size];
    char filenamecopy[size];
    char filename[size];
    int choice;

    // ASCII ART
    system("cls");
    printf(
        " _____     _____    _____             _    \n"
        "|     |___|   __|  |   __|___ ___ ___| |_ \n"
        "|   --| . |   __|  |   __|  _| . |_ -|   |\n"
        "|_____|  _|_____|  |__|  |_| |___|___|_|_|\n"
        "      |_|                                 \n"
        " _____                       _            \n"
        "|     |___ _____ ___ ___ ___|_|___ ___    \n"
        "|   --| . |     | . | .'|   | | . |   |   \n"
        "|_____|___|_|_|_|  _|__,|_|_|_|___|_|_|   \n"
        "                |_|                       \n");
    // ASCII ART END

    // MAIN MENU
    // printf("\t\t\t\tChoose a number:\n1. Register\n2. Login\n3. Exit (type exit)\nChoice: ");
    printf("\n\nChoose a number:\n");
    printf("1. Register\n");
    printf("2. Login\n");
    printf("3. Exit\n");
    printf("Choice: ");
    scanf("%i", &choice);

    // REGISTER
    if (choice == 1)
    {
        printf("\nEnter your username(No Space): ");
        scanf(" %s", username);
        printf("Enter your password(No Space): ");
        scanf(" %s", password);

        // CREATE FILE AS DATA PLACE HOLDER

        FILE *fp;

        strcpy(filenamecopy, username);
        strcat(filenamecopy, ".txt");
        strcpy(filename, filenamecopy);

        fp = fopen(filename, "w");

        fprintf(fp, "%s", username);
        fprintf(fp, "\n");
        fprintf(fp, "%s", password);

        fclose(fp);
        printf("Registration Successful...\n\n");
        system("pause");
        // END OF REGISTER
        main();
    }

    // LOGIN
    else if (choice == 2)
    {
        char username[size] = "", password[size] = "", un[size] = "", pw[size] = "";
        int username_len, pass_len, i;

        printf("\nEnter your username: ");
        scanf(" %s", username);

        // printf("Enter your password: ");
        // scanf(" %s", password);

        printf("Enter your password: ");
        do
        {
            password[i]=getch(); //masking the password with *
            printf("*");
            i++;
        }
        while(password[i-1]!='\r');
        password[i-1]='\0';

        // COMPARE INPUT TO THE PLACEHOLDER
        FILE *pFILE;

        strcpy(filenamecopy, username);
        strcat(filenamecopy, ".txt");
        strcpy(filename, filenamecopy);

        pFILE = fopen(filename, "r");
        fscanf(pFILE, " %s", un);
        fscanf(pFILE, " %s", pw);
        fclose(pFILE);

        // VERIFICATION
        if (strcmp(username, un) == 0 && (strcmp(password, pw) == 0))
        {
            // -- Windows
            printf("\nLogin Successful!\n");
            system("pause"); 

            printf(
                "\n"
                " _ _ _     _                      _____             _   \n"
                "| | | |___| |___ ___ _____ ___   |   __|___ ___ ___| |_ \n"
                "| | | | -_| |  _| . |     | -_|  |   __|  _| . |_ -|   |\n"
                "|_____|___|_|___|___|_|_|_|___|  |__|  |_| |___|___|_|_|\n");
        }
        // INCORRECT
        else
        {
            printf("\nInvalid Username or Password! Try again...\n");
            system("pause"); 
            // END LOGIN
            main();
        }
    }
    else if (choice == 3)
    {
        printf("Thank you for using this Application!");
        system("pause");
        return 0;
    }
    return 0;
}
