#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter any three numbers:");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("First number (%d)is greatest", num1);
        }
        else
        {
            printf("Third number (%d)is greatest", num3);
        }
    }
    else
    {
        if (num2 > num3)
        {
            printf("Second number (%d)is greatest", num2);
        }
        else
        {
            printf("Third number(%d)is greatest", num3);
        }
    }
    if ((num1 > num2) && (num1 > num3))
    {
        printf("First number (%d)is greatest", num1);
    }
    else if (num2 > num3)
    {
        printf("Second number (%d)is greatest", num2);
    }
    else
    {
        printf("Third number (%d)is greatest", num3);
    }
    ((num1>num2)||(num1>num3))?printf("first number (%d) is greatest",num1):(num2>num3)?printf("Second number (%d) is greatest",num2):printf("Third number (%d) is greatest",num3);
}
