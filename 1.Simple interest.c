//A C program to find the Simple Interest
#include<stdio.h>
#include<conio.h>
void main()
{
    int amount, years;
    float rate, interest;
    printf("Enter the principle amount");
    scanf("%d",&amount);
    printf("Enter the number of years");
    scanf("%d",&years);
    printf("Enter the rate of interest");
    scanf("%f",&rate);
    interest = (years*amount*rate)/100;
    printf("\nThe interest is %f",interest);
    getch();
}
