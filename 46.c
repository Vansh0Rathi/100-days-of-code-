Q46: Write a program to print the following pattern:
*****
*****
*****
*****
*****

input:

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the numbers of rows \n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
