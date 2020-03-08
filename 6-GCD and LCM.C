// C program to find LCD and GCD of 2 numbers

#include<stdio.h>
int main()
{
    int num1, num2, min, max;
    printf("Enter 2 numbers :");
    scanf("%d %d", &num1, &num2);
    min = num1>num2?num2:num1;
    while (1)
    {
        if((min%num1==0)&&(min%num2==0))
        {
        	printf("LCM: %d\n",min);
            break;
        }
        min++;
    }
    max = num1>num2?num1:num2;
    while(1)
    {
    	if((num1%max==0)&&(num2%max==0))
    	{
    		printf("GDC: %d",max);
    		break;
		}
		max--;
	}
    return 0;
}
