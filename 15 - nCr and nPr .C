// C Programto find nCr and nPr

#include<stdio.h>

int fact(int x)  // To find factorial using Recursion
{
    if(x==1)
        return (1);
    else
    {
        return(x * fact(x - 1));
    }
}

int main()
{
    int n, r, choice, check = 1, nCr, nPr;
    printf("Combinations and Permutations Calculator!\n");
    while(check == 1)
    {
        printf("1 - Calculate Combinations or nCr\n2 - Calculate Permutations or nPr\n3 - Exit\nInput : ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("\nEnter the number items (n) ");
                scanf("%d", &n);
                printf("Now enter the number of items being Choosen at a time (r) ");
                scanf("%d", &r);
                nCr = fact(n)/(fact(r)*fact(n-r));
                printf("%dC%d = %d\n\n", n, r, nCr);
                break;
            case 2:
                printf("\nEnter the number items (n) ");
                scanf("%d", &n);
                printf("Now enter the number of items being choosen at a time (r) ");
                scanf("%d", &r);
                nPr = fact(n)/fact(n-r);
                printf("%dP%d = %d\n\n", n, r, nPr);
                break;
            case 3:
                check = 0;
                break;
            default:
                printf("\nInvalid Choice!!\n");
                break;
        }
    }
    return 0 ;
    
}
