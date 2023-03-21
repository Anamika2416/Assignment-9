/* Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,ch;
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("Enter your choice number:");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1: printf("Addition is %d",a+b);
        break;
        case 2: printf("Subtraction is %d",a-b);
        break;
        case 3: printf("Multiplication is %d",a*b);
        break;
        case 4:printf("Division is %d",a/b);
        break;
        case 5:exit(0);
        break;
    }
    return 0;


}
