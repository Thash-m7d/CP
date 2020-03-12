// C Porgram to check the Quadrant of a given co-ordinate.

#include<stdio.h>
int main()
{
    int x, y, check = 1;
    
    while(check == 1)
    {
        printf("Enter the X Co-ordinate :");  // Input variables
        scanf("%d", &x);
        printf("Enter the Y Co-ordinate :");
        scanf("%d", &y);                        

        if((x > 0)&&(y > 0))
        {
            printf("\nThe Point (%d, %d) is in 1st Quadrant", x, y);
        }
        else if((x < 0)&&(y > 0))
        {
            printf("\nThe Point (%d, %d) is in 2nd Quadrant", x, y);
        }
        else if((x < 0)&&(y < 0))
        {
            printf("\nThe Point (%d, %d) is in 3rd Quadrant", x, y);
        }
        else if((x < 0)&&(y < 0))
        {
            printf("\nThe Point (%d, %d) is in 3rd Quadrant", x, y);
        }
        else if((x > 0)&&(y < 0))
        {
            printf("\nThe Point (%d, %d) is in 3rd Quadrant", x, y);
        }
        else
        {
            printf("The Point is on Origin (0, 0)");
        }
        
        printf("\n\n1 - Enter new Co-ordinate\n2 - Exit\n");
        scanf("%d", &check);
    }
    return 0;
}
