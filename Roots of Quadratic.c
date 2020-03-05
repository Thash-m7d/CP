// C program to find the roots of Quadratic

#include<stdio.h>
#include<math.h>
double find_discr(double a, double b, double c) // Returns discriminant
{
    return (b*b)-(4*a*c);
}
void main()
{
    double a, b, c, root1, root2, discriminant, imagPart, realPart;
    printf("The quadratic equation is of form ax^2 + bx + c = 0\n");
    printf("Enter the value for a, b and c ");
    scanf("%lf %lf %lf",&a, &b, &c);
    discriminant = find_discr(a,b,c);
    if(discriminant>0)
    {
        printf("The roots and real and distinct");
        root1 = (-b+sqrt(b*b-4*a*c))/(2*a);
        root2 = (-b-sqrt(b*b-4*a*c))/(2*a);
        printf("\n Root1 = %lf, Root2 = %lf",root1, root2);
    }
    else if(discriminant==0)
    {
        printf("The roots are real and equal");
        root1 = -b/(2*a);
        root2 = root1;
        printf("\nRoot1 = Root2 = %.2lf", root1);
    }
    else
    {
        printf("The roots are complex and distinct");
        realPart = -b/(2*a);
        imagPart = sqrt(-discriminant)/(2*a);
        printf("\nRoot1 = %.2lf + %.2lfi Root2 = %.2lf - i%.2lf",realPart, imagPart, realPart, imagPart);
    }
}
