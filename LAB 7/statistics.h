#include <stdio.h>
#include <math.h>

void display_array(int numbers[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("\n numbers[%d] = %d", i, numbers[i]);
    }
}

int array_sum(int numbers[], int length)
{
    int total = 0;
    for (int i = 0; i < length; i++)
    {
        total += numbers[i];
    }
    return total;
}

float array_mean(float array_sum, float length)
{
    float avg = array_sum / length;
    return avg;
}

float array_sd(int numbers[], float array_mean, float length)
{
    float num = 0.0, sd;
    for (int i = 0; i < length; i++)
    {
        num += ((numbers[i] - array_mean) * (numbers[i] - array_mean));
    }
    sd = sqrt(num / length);
    return sd;
}