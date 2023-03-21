/* Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,ch;
    printf("1. Isosceles Triangle\n");
    printf("2. Right Angled Triangle\n");
    printf("3. Equilateral triangle\n");
    printf("4. Exit\n");
    printf("Enter sides of triangle:");
    scanf("%d %d %d",&a,&b,&c);
    printf("Enter your choice number:");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
            if((a==b)||(b==c)||(c==a))
            printf("Isosceles Triangle\n");
            else
              printf("Not an Isosceles Triangle\n");
        break;
        case 2:
            if((b*b==a*a+c*c)||(a*a==b*b+c*c)||(c*c==a*a+b*b))
             printf("Right Angled triangle\n");
             else
              printf("Not an Right Angled Triangle\n");
        break;
        case 3:if((a==b)&&(b==c))
            printf("Equilateral Triangle\n");
            else
              printf("Not an Equilateral Triangle\n");
        break;
        case 5:exit(0);
        break;
    }
    return 0;


}
