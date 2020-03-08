// C Program to print First N Natural Numbers

#include<stdio.h>
int main()
{
    int range, temp, sum=0;
    printf("Enter a number : ");
    scanf("%d", &range);
    temp = range;
    while(temp>0)
    {
        sum+=temp;
        temp--;
    }
    printf("The sum of Natural numbers upto %d is %d", range, sum);
    return 0;
}
