#include <stdio.h>

int smaller(int a, int b)
{
    if(a < b)
        return a;
    else
        return b;
}

int main()
{
    int a, b, result;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    result = smaller(a, b);

    printf("Smaller = %d\n", result);

    return 0;
}
