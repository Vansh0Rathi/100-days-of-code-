Q11: Write a program to input an integer and check whether it is even or odd using if–else.

input:

#include<stdio.h>
int main()
{
    int n;          
    printf("Enter a number \n");
    scanf("%d",&n);
    if(n%2==0)          //check whether a number is even or odd 
    {
        printf("%d is Even",n);
    }
    else
    {
        printf("%d is Odd",n);
    }
}
