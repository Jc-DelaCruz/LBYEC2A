#include <stdio.h>
// 2. Create a program that will compute for your grade. Use LBYEC2A Grading system.
// Lab Activities: 20%
// Machine Problems: 20%
// Project: 30%
// Practical Exam 1: 15%
// Practical Exam 2: 15%
int main(){
    float lab_act, machine_prob, proj, prac_exam1, prac_exam2;
    float lab_act_total, machine_prob_total, proj_total, prac_exam1_total, prac_exam2_total;
    float total;  // variable naming == declare as float


// input
    printf("Input Grade for LABORATORY ACTIVITIES: ");
    scanf("%f", &lab_act);
        printf("\nInput Grade for MACHINE PROBLEMS: ");
        scanf("%f", &machine_prob);
            printf("\nInput Grade for PROJECT: ");
            scanf("%f", &proj);
                printf("\nInput Grade for PRACTICAL EXAM 1: ");
                scanf("%f", &prac_exam1);
                    printf("\nInput Grade for PRACTICAL EXAM 2: ");
                    scanf("%f", &prac_exam2);

//process 
    lab_act_total = ((lab_act / 100) *  20);
    machine_prob_total = ((machine_prob / 100) *  20);
    proj_total = ((proj / 100) * 30);
    prac_exam1_total = ((prac_exam1 / 100) *  15);
    prac_exam2_total = ((prac_exam2 / 100) *  15);
    total = lab_act_total + machine_prob_total + proj_total + prac_exam1_total + prac_exam2_total;

//output
    printf("\n\nTOTAL GRADE:");
    printf("\n== %.2f == ", total);
    return 0;
}