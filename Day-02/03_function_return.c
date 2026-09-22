#include <stdio.h>
int square(int n)
{
    return n * n;
}

int main()
{
    int num, answer;
    printf("Enter a number: ");
    scanf("%d", &num);

    answer = square(num);

    printf("Square = %d\n", answer);
    return 0;
}
