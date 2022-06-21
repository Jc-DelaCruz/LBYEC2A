#include "statistics.h"

// author: John Dela Cruz
// done by: May 24, 2022 ; 3:32PM
int main()
{
    // ask user + verification
    int n;
    printf("\n== STATISTICS ==");
    printf("\n\nHow many array do you want to put? [Max of 10]\n");
    scanf("%d", &n);
    if (n > 10)
    {
        printf("\n\n ! ! ! INVALID (Rerun the Code again) ! ! ! \n\n");
        return 0;
    }

    // array declaration
    int numbers[n], result[n];
    printf("Input numbers (Maximum of %d): ", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }
    // display data
    display_array(numbers, n);

    // sum/avg/sd
    int sum = array_sum(numbers, n);
    float mean = array_mean(sum, n);
    float sd = array_sd(numbers, mean, n);

    // display answer
    printf("\n\n== The Sum of the array is %d", sum);
    printf("\n== The Mean of the array is %.2f", mean);
    printf("\n== The Standard Deviation of the array is %.2f\n", sd);

    return 0;
}