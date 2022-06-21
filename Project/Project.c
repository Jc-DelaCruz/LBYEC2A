#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define size 50

void helpdesk(){
    int choiceQs;
    char loop_choice;
    system("cls");
    printf(
        " _____     _        _____          _     _ \n"
        "|  |  |___| |___   |     | ___ ___| |_  |_|\n"
        "|     | -_| | . |  |  |  | -_|_ -| '_|   _ \n"
        "|__|__|___|_|  _|  |____/|___|___|_,_|  |_|\n"
        "            |_|                            \n");
        printf("\n\nChoose a FAQs: \n");
        printf("1 - What is computer engineering?\n");
        printf("2 - What set of skills do I need to become a fully-fledged computer engineer?\n");
        printf("3 - Do I need previous knowledge of coding to be able to enter or pass CpE?\n");
        printf("4 - What opportunities are there for computer engineers?\n");
        printf("5 - Where can I find reviewers or notes on the course's quizzes?\n");
        printf("6 - What programming languages can we learn in CpE?\n");
        printf("7 - Should I join CpE's home org ACCESS?\n");
        printf("8 - Exit Program\n");
        printf("Choice: ");
        scanf("%i", &choiceQs);
        if (choiceQs == 1){
            printf("\nQ1: What is computer engineering?\n\n"
            "A: A brief description of computer engineering is that it is engineering applied to computers and computer-based systems,\n"
            "as engineering is the application of basic science ideas to the solving of problems within limits (that is, making stuff!).\n"
            "Computer engineers, in other words, design and develop computers such as personal computers, workstations, and supercomputers.\n"
            "They also create computer-based systems for automobiles, airlines, appliances, electronics, phones, communication networks, and a wide range of other things.\n"
            "In computer-based systems, computer engineers often design not only the hardware but also much of the software.\n");
            printf("\n\nNeed further help? Contact DLSU directly through: https://www.dlsu.edu.ph/contact-us-new-normal/\n");
            printf("Thank you for utilizing the Froshie Companion Helpdesk! Have a blessed and wonderful stay here at DLSU!");
        
        }
        else if (choiceQs == 2){
            printf("\nQ2: What set of skills do I need to become a fully-fledged computer engineer?\n\n"
            "A: Basic scientific and math skills are required of all scientists and engineers\n"
            "They must also be able to work in groups and communicate vocally and in writing their views. \n"
            "Computer engineers, in particular, are skilled in both hardware and software.\n"
            "Either one can be highlighted, depending on your interests.\n");
            printf("\n\nNeed further help? Contact DLSU directly through: https://www.dlsu.edu.ph/contact-us-new-normal/\n");
            printf("Thank you for utilizing the Froshie Companion Helpdesk! Have a blessed and wonderful stay here at DLSU!");
        }
        else if (choiceQs == 3)
        {
            printf("\nQ3: Do I need previous knowledge of coding to be able to enter or pass CpE?\n\n"
            "A: No, as a matter of fact the course makes it so that all newcomers are treated as complete \n"
            "beginners and as so, they will be taught as such with the basics of programming from scratch.\n");
            printf("\n\nNeed further help? Contact DLSU directly through: https://www.dlsu.edu.ph/contact-us-new-normal/\n");
            printf("Thank you for utilizing the Froshie Companion Helpdesk! Have a blessed and wonderful stay here at DLSU!");
        }
        else if (choiceQs == 4){
            printf("\nQ4: What opportunities are there for computer engineers?\n\n"
            "Computer engineers are needed in both the corporate and public sectors. The military, for example, need computer experts to create sophisticated control systems.\n"
            "Computer engineers are employed by governments, schools, and hospitals to create and manage their computers infrastructure and internal databases. \n"
            "To design hardware such as CPUs, memory, and graphics cards, game developers require competent computer engineers. \n"
            "The automated systems of utility corporations are maintained by teams of computer engineers.\n");
            printf("\n\nNeed further help? Contact DLSU directly through: https://www.dlsu.edu.ph/contact-us-new-normal/\n");
            printf("Thank you for utilizing the Froshie Companion Helpdesk! Have a blessed and wonderful stay here at DLSU!");
        }
        else if (choiceQs == 5){
            printf("\nQ5: Where can I find reviewers or notes on the course's quizzes?\n\n"
            "A: Might we point you to the direction of the organization SYNTAX here in DLSU, they provide \n"
            "reviewers and notes on previous and upcoming quizzes for engineering students here in DLSU.\n"
            "Link to their website: https://dlsusyntax.wixsite.com/syntaxdlsu/reviewers.\n");
            printf("\n\nNeed further help? Contact DLSU directly through: https://www.dlsu.edu.ph/contact-us-new-normal/\n");
            printf("Thank you for utilizing the Froshie Companion Helpdesk! Have a blessed and wonderful stay here at DLSU!");
        }
        else if (choiceQs == 6){
            printf("\nQ6: What programming languages can we learn in CpE?\n\n"
            "A: The languages that first-year students would be taught would be that of Python, C++, and HTML with CSS. \n"
            "Anticipate learning more in the coming terms after, but for now those are what is to be encoutered at the start of your journey.\n");
            printf("\n\nNeed further help? Contact DLSU directly through: https://www.dlsu.edu.ph/contact-us-new-normal/\n");
            printf("Thank you for utilizing the Froshie Companion Helpdesk! Have a blessed and wonderful stay here at DLSU!");
        }
        else if (choiceQs == 7){
            printf("\nQ7: Should I join CpE's home org ACCESS?\n\n"
            "A: Ultimately, it is up to you, though by joining ACCESS you would be able to have access (heh) to a better experience here in CpE. The org consistently hosts events that you may find enticing.\n"
            "It hosts webinars which can give you more insight about different computer related industries such as the gaming industry (GGWD), tech industry (BYTE), and many other that apply CpEs discipline.\n"
            "The org also hosts events which could help sharpen the expertise that are already being taught in the course with seminars for certain topics, mostly about programming and software.\n"
            "ACCESS has many ideas in mind to have everyone come together. And finally, the organization hosts events which encourages all of CpE to come together and be more connected with one another, be it through gaming competitions, or movie nights,\n"
            "If you want to know more about the org, you may visit their FB page: https://www.facebook.com/AccessDLSU\n");
            printf("\nNeed further help? Contact DLSU directly through: https://www.dlsu.edu.ph/contact-us-new-normal/\n");
            printf("Thank you for utilizing the Froshie Companion Helpdesk! Have a blessed and wonderful stay here at DLSU!");
        }
        else if (choiceQs == 8){
            printf("\nExiting Program... Thank you for using!\n");
            system("pause");
            return 0;
        }
        else{
            printf("Invalid Input... Try again...");
            helpdesk();
        }
        while (loop_choice != 'y' || loop_choice != 'Y' || loop_choice != 'N' || loop_choice != 'n'){
		printf("\n\n\nDo you want to view other FAQs[Y/N]? ");
		scanf(" %c",&loop_choice); printf("\n");
		if (loop_choice == 'y' || loop_choice == 'Y')
        {
			printf("Restarting...\n");
            system("pause");
            helpdesk();          
		}
        else if(loop_choice == 'N' || loop_choice == 'n'){
            printf("\nExiting Program...Thank you for using the program!");
            return 0;
        }
	}
    }

void table(char array[100][100],char columns[100][100],char units[100][100],int start,int limit){
	int space_length = 37;
	int space1_length = 8;
	float length,length3;
	int length2,length4,i,k;
	char space[50][50] = {"","",""};
	char space2[50][50] = {"","",""};
	char space3[50][50] = {"","",""};
	
	printf("==================================================================\n");
	printf("||  Course  ||            Course Title              ||  Units  ||");
	printf("\n================================================================\n");
	for(i=start;i<limit;i++){ 
		length = space1_length - strlen(array[i]);
		length2 = space_length - strlen(columns[i]);
		length3 = space1_length - strlen(units[i])-1;
		for (k=0;k<(int)length;k++) 
            {
            space[i][k] = ' ';
            }
		for (k=0;k<(int)length2;k++) 
            {
            space2[i][k] = ' ';
            }
		
		for (k=0;k<(int)length3;k++) {
            space3[i][k] = ' ';
            }
		
		printf("|| %s%s||",array[i],space[i]); // Course
		printf(" %s%s||",columns[i],space2[i]); // Course Title(long)
		printf("  %s%s||",units[i],space3[i]); // Units
		printf("\n================================================================\n");
	}
} // For course flowcharts

void flowchart(){ // This is for the course flowcharts 
	int i,j;
	int term;
    char loop_choice;
	
    system("cls");
    printf(
    " _____ _               _           _      _ \n"
    "|   __| |___ _ _ _ ___| |_ ___ ___| |_   |_|\n"
    "|   __| | . | | | |  _|   | .'|  _|  _|   _ \n"
    "|__|  |_|___|_____|___|_|_|__,|_| |_|    |_|\n");
    
	printf("Choices:\n");
	printf("1 - 1st Term \n");
	printf("2 - 2nd Term \n");
    printf("3 - 3rd Term \n");
    printf("4 - Exit Program\n");
	printf("What Term? ");
	scanf(" %i",&term);
		if (term == 1){
			char courses[100][100] = {"NSTP101","FNDMATH","BASCHEM","BASPHYS","FNDSTAT","GEARTAP"};
			char course_title[100][100] = {"National Service Training Program","Foundation in Math",
			"Basic Chemistry","Basic Physics","Foundation in Statistics","Art Appreciation"};
			char units[100][100] = {"0","5","3","3","3","3"};
			
			table(courses,course_title,units,0,5);
		}
		else if (term == 2){
			char courses[100][100] = {"NSTPCW1","GEMATMW","CALENG1","COEDISC","PROLOGI","LBYCPA1","LBYEC2A","GESTSOC","GERIZAL"};
			char course_title[100][100] = {"National Training Program 1","Mathematics in the Modern World","Differential Calculus",
			"Comp. Engineering as a Discipline","Programming Logic and Design","Programming Logic and Design Lab","Computer Fundamentals and Prog",
			"Science, Technology, and Society","Life and Works of Rizal"};
			char units[100][100] = {"3","3","3","1","2","2","1","3","3"};
			
			table(courses,course_title,units,0,9);
		}
		else if (term == 3){
			char courses[100][100] = {"NSTPCW2","LCLSONE","SAS1000","LASARE1","ENGPHYS","LBYPH1A","CALENG2","LBYEC2B","LBYCPEI","GEPCOMM","LCFAITH","GELECSP"};
			char course_title[100][100] = {"National Training Program","Lasallian Studies 1",
			"Student Affairs Service 1000","Lasallian Recollection 1","Physics for Engineers",
			"Physics for Engineers Lab", "Integral Calculus","Computer Fundamentals & Programming","Object Oriented Programming Lab",
			"Purposive Communications","Faith Worth Living","Social Science and Philosophy"};
			char units[100][100] = {"3","1","0","0","3","1","3","1","2","3","3","3"};
			
			table(courses,course_title,units,0,11);
		}
        else if (term == 4){
			printf("Exiting Program... Thank you for using the program!\n");
            system("pause");
            return 0;
		}
        while (loop_choice != 'y' || loop_choice != 'Y' || loop_choice != 'N' || loop_choice != 'n'){
		printf("\nDo you want to view other flowcharts[Y/N]? ");
		scanf(" %c",&loop_choice); printf("\n");
		if (loop_choice == 'y' || loop_choice == 'Y')
        {
			printf("Restarting...\n");
            system("pause");
            flowchart();          
		}
        else if(loop_choice == 'N' || loop_choice == 'n'){
            printf("Thank you for using the program!");
            return 0;
        }
	}
    }

int mainProgram(void){
    int choiceProgram;
    system("cls");
    printf(
            " _ _ _     _                      _____             _   \n"
            "| | | |___| |___ ___ _____ ___   |   __|___ ___ ___| |_ \n"
            "| | | | -_| |  _| . |     | -_|  |   __|  _| . |_ -|   |\n"
            "|_____|___|_|___|___|_|_|_|___|  |__|  |_| |___|___|_|_|\n");
        printf("\n\nMain Menu: \n");
        printf("1 - GPA Calculator\n");
        printf("2 - Flowchart\n");
        printf("3 - Help Desk / FAQs\n");
        printf("4 - Exit Program\n");
        printf("Choice: ");
        scanf("%i", &choiceProgram);
        if (choiceProgram == 1){
            printf("Loading...\n");
            system("pause");
            printf("GPA CALCULATOR");
        }
        else if (choiceProgram == 2){
            printf("Loading...\n");
            system("pause");
            flowchart();
        }
        else if (choiceProgram == 3)
        {
            printf("Loading...\n");
            system("pause");
            helpdesk();
        }
        else if (choiceProgram == 4){
            printf("Exiting Program... Thank you for using the program!\n");
            system("pause");
            return 0;
        }
        else{
            printf("Invalid Input");
        }
}

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
            printf("\nLogin Successful!\n");
            system("pause"); 
            mainProgram();
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
        printf("Exiting Program... Thank you for using the program!\n");
        system("pause");
        return 0;
    }
    return 0; 
}