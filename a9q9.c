//Program to Convert even number into its upper nearest odd number Switch Statement.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    switch(n%2==0)
    {
        case 1:printf("Nearest odd number of %d is %d.",n,n+1);
        break;
        case 0:printf("The entered number %d is not even.",n);
        break;
    }
    return 0;
}
