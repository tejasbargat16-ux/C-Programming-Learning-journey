#include <stdio.h>
int main()
{
    int numbers[5];
    int i;
    int sum = 0;
    float average;
    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
        sum = sum + numbers[i];
    }
    average = sum / 5.0;
    printf("Average = %.2f\n", average);
    return 0;
}
