Q34: Write a program to check if a number is prime.

input:

#include<stdio.h>
int main()
{
    int num,ctr=0;
    printf("Enter a number \n");
    scanf("%d",&num);
    for(int i=1 ; i<=num ; i++)
    {
        if(num%i==0)
        {
            ctr++;
        }
    }
    if(ctr==2)
    printf("%d is a prime number",num);
    else
    printf("%d is not a prime number",num);
}
