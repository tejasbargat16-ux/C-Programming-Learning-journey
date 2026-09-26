#include <stdio.h>
int main()
{
    int numbers[5];
    int i;
    int greatest;
    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }

    greatest = numbers[0];

    for(i = 1; i < 5; i++)
    {
        if(numbers[i] > greatest)
        {
            greatest = numbers[i];
        }
    }
    printf("Greatest = %d\n", greatest);
    return 0;
}
