#include<stdio.h>
int main()
{
    int n=2016;
    switch(n%100==0)
    {
        case 1:switch(n%400==0)
               {
                   case 1:printf("leap");
                          break;
                   case 0:printf("non leap");
                          break;
               }
               break;
        case 0:switch(n%4==0)
                {
                   case 1:printf("leap");
                          break;
                   case 0:printf("non leap");
                          break;
               }
               break;

    }
    return 0;

}
