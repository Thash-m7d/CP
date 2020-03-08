// C Porgram to print the First Prime number in a given range;

#include<stdio.h>
int main()
{
    int start, end,check = 0, flag =0;
    int i,j;
    printf("Enter the starting number :");
    scanf("%d", &start);
    printf("Enter the ending number :");
    scanf("%d", &end);
    while(end<start)
    {
        printf("The number has to be greater than starting value ");
        scanf("%d", &end);
	}
    for(i=start; i<=end; i++)
    {
        for (j = 2; j <= i/2 ; j++)
        {   
            check=0;
            if(i%j==0)
            {
                check = 1;
            }
        }
        if(check==0)
            break;
    }
    printf("The first prime number is %d", i);
    return 0;
    
}
