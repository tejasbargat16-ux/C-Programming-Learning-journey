#include <stdio.h>
int main()
{
    int numbers[5];
    int search;
    int i;
    int found = 0;
    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }
    printf("Enter number to search: ");
    scanf("%d", &search);

    for(i = 0; i < 5; i++)
    {
        if(numbers[i] == search)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
        printf("Number found\n");
    else
        printf("Number not found\n");
    return 0;
}
