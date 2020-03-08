// C Program to Calculate the HCF of Two Given Numbers

#include<stdio.h>
int main()
{
    int num1, num2, hcf, max;
    printf("Enter two numbers :");
    scanf("%d %d", &num1, &num2);
    max =num1>num2?num1:num2;
    while(1)
    {
        if((num1%max==0)&&(num2%max==0))
        {
            printf("HCF: %d", max);
            break;
        }
        max--;
    }
    return 0;
}
