#include <stdio.h>
int arraySum(int numbers[], int size)
{
    int i;
    int sum = 0;

    for(i = 0; i < size; i++)
    {
        sum = sum + numbers[i];
    }

    return sum;
}

int main()
{
    int numbers[5];
    int i;
    int result;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }

    result = arraySum(numbers, 5);

    printf("Sum = %d\n", result);
    return 0;
}
