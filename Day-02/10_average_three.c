#include <stdio.h>

float average(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}

int main()
{
    int a, b, c;
    float result;

    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    result = average(a, b, c);

    printf("Average = %.2f\n", result);

    return 0;
}
