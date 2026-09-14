#include <stdio.h>

void square(int n)
{
    printf("Square = %d", n * n);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    square(n);

    return 0;
}
