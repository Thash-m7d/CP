// C Porgram to find the Factorial of a Given Number

#include<stdio.h>

int main()
{
    int num, fact=1;

    printf("Enter a number :");
    scanf("%d", &num);

    for(int i = num; i > 0; i--)
    {
        fact *= i;
    }

    printf("\nThe factorial of %d : %d", num, fact);

    return 0;
}
