//Program to convert a positive number into a negative number and negative number into a positive number using a switch statement.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    switch(n>=0)
    {
        case 1: printf("%d is positive and its negative form is %d.",n,-n);
        break;
        case 0:printf("%d is negative and its positive form is %d.",n,-n);
        break;
    }
    return 0;
}
