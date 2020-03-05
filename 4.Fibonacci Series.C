// Fibonacci Generator!

#include<stdio.h>
int main()
{
    int range, num1, num2, temp;
    printf("Enter the range of numbers to be generated :");
    scanf("%d", &range);
    printf("The Fibonacci series :\n");
    num1 = 1;
    num2 = 1;
    if(range>0)
    {
    	printf("%d ", num1);
    	range--;
	}
    while(range>0)
    {
        printf("%d ",num2);  
        temp = num2; 
        num2 = num2+num1; 
        num1 = temp; 
        range--;
    }
    return 0;
}
