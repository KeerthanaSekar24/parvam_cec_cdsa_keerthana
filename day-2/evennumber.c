#include <stdio.h>
int main()
{
    int num;
    printf("Enter the range to print the numbers:");
    scanf("%d", &num);
    printf("The numbers between 0 to %d are as follows:\n:", num);
    for (int i = 0; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }
    printf("The numbers between 0 to %d are as follows:\n:", num);
    for (int i = 0; i <= num; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }
}