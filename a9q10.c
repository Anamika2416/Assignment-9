#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,a,b,c,d;
    printf("Enter coefficients of quadratic equation:");
    scanf("%d %d %d",&a,&b,&c);
    d=b*b-4*a*c;
    switch(d>0)
    {
        case 1:x1=(-b+sqrt(d))/(2*a);
               x2=(-b+sqrt(d))/(2*a);
               printf("Roots %f and %f are real and unequal",x1,x2);
               break;
        case 0:switch(d<0)
        {
            case 1:x1=(-b+sqrt(d))/(2*a);
               x2=(-b+sqrt(d))/(2*a);
               printf("Roots %f and %f unequal and imaginary",x1,x2);//Not taking minus sign as input
               break;
            case 0:x1=(-b)/(2*a);
                   printf("Roots %f and %f real and equal",x1,x1);
                   break;


        }break;
    }
    return 0;

}
