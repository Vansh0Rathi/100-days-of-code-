Q17: Write a program to find the roots of a quadratic equation and categorize them.

input:

#include<stdio.h>
#include<math.h>

int main()
{
        int a,b,c;          // variable to store coefficents of a quadratic eq
        float determinant, root1 ,root2;    //variable to calculate determinat,root1 & root2
        printf("Enter coefficents of a,b&c \n");
        scanf("%d %d %d",&a,&b,&c);
        determinant=b*b-4*a*c;          //calculation of determinant
        
        if(determinant>0)
        {
            root1=(-b-sqrt(b*b-4*a*c))/2*a;         //calculation of root1
            root2=(-b+sqrt(b*b-4*a*c))/2*a;         //calculation of root2
            printf("Roots are real and different: %f, %f", root1 ,root2);
        }
        else if(determinant==0)
        {
            root1=-b/(2*a);                        //calculation of root
            printf("Roots is equal and real: %f", root1);
        }
        else
        {
            printf("Roots are complex");
        }
}
