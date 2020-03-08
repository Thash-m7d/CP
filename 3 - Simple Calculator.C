// A Simple Calculator

#include<stdio.h>
void main()
{
    int num1, num2, choice, ans;
    printf("Welcome\nEnter 2 numbers");
    scanf("%d %d", &num1, &num2);
    printf("Now select the ction you want to perform :\n1-Add\n2-Subtract\n3-Mutiply\n4-Divide");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1 : 
			ans = num1+ num2;
            printf("The sum is : %d", ans);
            break;
        case 2 :
			ans = num1 - num2;
            printf("The difference is : %d", ans);
            break;
        case 3 :
			ans = num1*num2;
            printf("The product is : %d", ans);
            break;
        case 4 :
			ans = num1/num2;
            printf("The quotient is : %d", ans);
            break;
    }
}
