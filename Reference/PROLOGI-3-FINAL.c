#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>


void table_generation(char array[100][100],char columns[100][100],char units[100][100],int start,int limit){
	int true_length = 37;
	int sec_length = 8;
	float length,length3;
	int length2,length4,i,k;
	char space[50][50] = {"","",""};
	char space2[50][50] = {"","",""};
	char space3[50][50] = {"","",""};
	
	printf("\t\t____________________________________________________________\n");
	printf("\t\t| Course  |            Course Title              |  Units  |");
	printf("\n\t\t------------------------------------------------------------\n");
	for(i=start;i<limit;i++){ 
		length = sec_length-strlen(array[i]);
		length2 = true_length-strlen(columns[i]);
		length3 = sec_length-strlen(units[i])-1;
	
		for (k=0;k<(int)length;k++) {space[i][k] = ' ';}
	
		for (k=0;k<(int)length2;k++) {space2[i][k] = ' ';}
		
		for (k=0;k<(int)length3;k++) {space3[i][k] = ' ';}
		
		printf("\t\t| %s%s|",array[i],space[i]); // Course
		printf(" %s%s|",columns[i],space2[i]); // Course Title(long)
		printf("  %s%s|",units[i],space3[i]); // Units
		printf("\n\t\t------------------------------------------------------------\n");
	}
} // For course flowcharts


void gpa_calculator(){
	char subject[50];
	float totalunits,unitgrade,units;
	float allgrades,grade,gpa;
	char choice = 89;
	
	while (choice == 89 || choice == 121) {
		printf("Enter your subject, its number of units, and your grade: "); printf("\n");
		printf("Subject: ");
		scanf(" %s", &subject); 
		printf("Number of Units: ");
		scanf(" %f", &units); 
		printf("Subject Grade: ");
		scanf(" %f", &grade); printf("\n");
	
		printf("\nDo you wish to add more subjects[Y/N]? ");
		scanf(" %c", &choice);

		totalunits = totalunits + units;
		unitgrade = units * grade;
		allgrades = allgrades + unitgrade;
	}
		gpa = allgrades / totalunits;
		if (gpa < 1.0) {
			printf("Your GPA is %0.4f and you failed this term");
		}
		else if (gpa >= 1.0 && gpa < 3.0 ) {
			printf("Your GPA is %0.4f and you have passed this term.",gpa);
		}
		else if (gpa >= 3.0 && gpa <= 4.0) {
			if (totalunits >= 2.5){
				printf("\nDid you pass NSTP and INTRO subjects[Y/N]? ");
				scanf(" %c", &choice);
				if (choice == 78) { printf("Your GPA is %0.4f and you passed this term.", gpa); }
				else if (choice == 89) {
					printf("Did you get a sanction of suspension[Y/N]? ");
					scanf(" %c", &choice);
					if (choice == 89) { printf("Your GPA is %0.4f and you passed this term.", gpa); }
					else if (choice == 78) {
						if (gpa >= 3.50) {
							printf("Your GPA is %0.4f and you are a First Dean's Lister this term.", gpa);
					}
						else if (gpa < 3.50 && gpa >= 3.0) {
							printf("Your GPA is %0.4f and a Second Dean's Lister this term.", gpa);
					}
				}
			}
		}
	}
}


void table(){ // This is for the course flowcharts 
	int i,j;
	char choice[60];
	int term;
	char loop_choice;
	
	do {
	printf("List of Courses: \n");
	printf("1. Computer Engineering [Enter CpE] \n");
	printf("2. Electrical Engineering [Enter ECE] \n\n");
	printf("What is your course? ");
	scanf(" %[^\n]s",choice);
	
	if (strcmpi(choice,"CPE") == 0){
		printf("What Term? ");
		scanf(" %i",&term);
		if (term == 1){
			char courses[100][100] = {"NSTP101","FNDMATH","BASCHEM","BASPHYS","FNDSTAT","GEARTAP"};
			char course_title[100][100] = {"National Service Training Program","Foundation in Math",
			"Basic Chemistry","Basic Physics","Foundation in Statistics","Art Appreciation"};
			char units[100][100] = {"0","5","3","3","3","3"};
			
			table_generation(courses,course_title,units,0,5);
		}
		else if (term == 2){
			char courses[100][100] = {"NSTPCW1","GEMATMW","CALENG1","COEDISC","PROLOGI","LBYCPA1","LBYEC2A","GESTSOC","GERIZAL"};
			char course_title[100][100] = {"National Training Program 1","Mathematics in the Modern World","Differential Calculus",
			"Comp. Engineering as a Discipline","Programming Logic and Design","Programming Logic and Design Lab","Computer Fundamentals and Prog",
			"Science, Technology, and Society","Life and Works of Rizal"};
			char units[100][100] = {"3","3","3","1","2","2","1","3","3"};
			
			table_generation(courses,course_title,units,0,9);
		}
		else if (term == 3){
			char courses[100][100] = {"NSTPCW2","LCLSONE","SAS1000","LASARE1","ENGPHYS","LBYPH1A","CALENG2","LBYEC2B","LBYCPEI","GEPCOMM","LCFAITH","GELECSP"};
			char course_title[100][100] = {"National Training Program","Lasallian Studies 1",
			"Student Affairs Service 1000","Lasallian Recollection 1","Physics for Engineers",
			"Physics for Engineers Lab", "Integral Calculus","Computer Fundamentals & Programming","Object Oriented Programming Lab",
			"Purposive Communications","Faith Worth Living","Social Science and Philosophy"};
			char units[100][100] = {"3","1","0","0","3","1","3","1","2","3","3","3"};
			
			table_generation(courses,course_title,units,0,11);
		}
		else if (term == 4){
			char courses[100][100] = {"CALENG3","DATSRAL","LBYCPA2","DISCRMT","FUNDCKT","LBYEC2M","ENGCHEM","LBYCH1A","GEFTWEL"};
			char course_title[100][100] = {"Differential Equations","Data Structures and Algorithms",
			"Data Structures and Algorithms Lab","Discrete Mathematics","Fundamentals of Electrical Circuits",
			"Fundamentals of Elect. Circuits Lab","Chemistry for Engineers","Chemistry for Engineers Lab","Physical Fitness and Wellness"};
			char units[100][100] = {"3","1","2","3","3","1","3","1","2",};
	
			table_generation(courses,course_title,units,0,8);
		}
	}
	else if (strcmpi(choice,"ECE") == 0){
		printf("What Term? ");
		scanf(" %i",&term);
		if (term == 1){
			char courses[100][100] = {"NSTP101","FNDMATH","BASCHEM","BASPHYS","FNDSTAT","GEETHIC"};
			char course_title[100][100] = {"National Service Training Program","Foundation in Math",
			"Basic Chemistry","Basic Physics","Foundation in Statistics","Ethics"};
			char units[100][100] = {"0","5","3","3","3","3"};
			
			table_generation(courses,course_title,units,0,5);
		}
		else if (term == 2){
			char courses[100][100] = {"NSTPCW1","GEMATMW","CALENG1","LBYME1C","LCENWRD","GERIZAL","GESTSOC","LBYEC2A"};
			char course_title[100][100] = {"National Training Program","Differential Calculus","Computer Aided Drafting",
			"Encountering the Word in the World"," Life and Works of Rizal","Science, Technology, and Society","Computer Fundamentals and Prog"};
			char units[100][100] = {"3","3","3","1","3","3","3","1"};
	
			table_generation(courses,course_title,units,0,7);	
		}
		else if (term == 3){
			char courses[100][100] = {"NSTPCW2","LCLSONE","SAS1000","GELECSP","LASARE1","ENGPHYS","LPYPH1A","ENGPHS2","LPYPH1B","CALENG2","ENGMANA","LBYEC2B"};
			char course_title[100][100] = {"National Training Program","Lasallian Studies 1","Student Affairs Series 1",
			"Social Science and Philosophy","Lasallian Recollection 1","Physics for Engineers","Physics for Engineers Laboratory",
			"Physics 2","Physics 2 Laboratory","Integral Calculus","Engineering Management","Computer Fundamentals and Programming 2"};
			char units[100][100] = {"3","1","0","3","0","3","1","3","1","3","2","1"};
	
			table_generation(courses,course_title,units,0,11);	
		}
		else if (term == 4){
			char courses[100][100] = {"GELECAH","GEFTWEL","CALENG3","ELECEN1","LBYEC2D","GEARTAP","DATAENG"};
			char course_title[100][100] = {"Course Title","Arts and Humanities","Physical Fitness and Wellness",
			"Differential Equations","Circuits 1","Circuits 1 Laboratory","Art Appreciation","Engineering Data Analysis"};
			char units[100][100] = {"3","2","3","3","1","3","3"};
	
			table_generation(courses,course_title,units,0,6);		
		 	}
	}
	while (loop_choice != 'y' || loop_choice != 'Y' || loop_choice != 'N' || loop_choice != 'n'){
		printf("\nDo you want to view other flowcharts[Y/N]? ");
		scanf(" %c",&loop_choice); printf("\n");
		if (loop_choice == 'y' || loop_choice == 'Y' || loop_choice == 'N' || loop_choice == 'n'){
			break;
		}
	}
} while (loop_choice == 'Y' || loop_choice == 'y');
}


int main(void){
	char username[100];
	char password[100];
	char filenamecopy[100];
	char filename[100];
	int module_number;
	int choice;
	int status;
	
	printf("Choose a number:\n1. Register\n2. Log In\nYour Choice: ");
	scanf("%i",&choice);
	
	if (choice == 1){ // Registration
		printf("Choose a username(No space please): ");
		scanf(" %s",username);
		printf("Choose a password(No space please): ");
		scanf(" %s",password);
		printf(" \n");
		
		FILE *fp;
		
		strcpy(filenamecopy, username);
		strcat(filenamecopy, ".txt");
    	strcpy(filename,filenamecopy);

    	fp = fopen(filename,"w");

    	fprintf(fp,"%s",username);
    	fprintf(fp,"\n");
    	fprintf(fp,"%s",password);
	
    	fclose(fp);
   		main();
	} // Log In Code of Program
	
	else if (choice == 2){ // LOGIN
	
		char username[100]="", password[100] = "",un[100]="",pw[100]="";
		int username_len, pass_len, i;
		
		printf("Enter username: "); 
		scanf(" %s", username);
		printf("Enter password: ");
		scanf(" %s", password);
		
    	FILE * pFILE;
    	strcpy(filenamecopy, username);
		strcat(filenamecopy, ".txt");
    	strcpy(filename,filenamecopy);
    	
		pFILE = fopen(filename,"r");
		fscanf(pFILE, " %s", un);
		fscanf(pFILE, " %s", pw);
		fclose(pFILE);
		
		if ((strcmp(username,un) == 0) && (strcmp(password,pw) == 0)){
			// Modules
			printf("\nLogin Successful! Preparing Modules.\n\n");
			system("Pause"); printf("\n");
			printf("Which feature do you want to use?\n");
			printf("1. Course Flowchart [Press 1]\n");
			printf("2. GPA calculator [Press 2]\n");
			
			do {
			printf("Please type your choice: ");
			scanf("%i", &module_number); printf("\n");
			} while ((module_number < 1) || (module_number > 2));
			
			if(module_number == 1){
				table();
			}
			else if(module_number == 2){
				gpa_calculator();
			}
		}
		else {
			printf("\nInvalid username or password! Please try again...\n\n");
			system("Pause"); printf("\n");
			main();
		}
	}
	return 0;
}
