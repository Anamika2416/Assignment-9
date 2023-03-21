/* Convert the following if-else-if construct into switch case:
if(var == 1)
System.out.println("good");
else if(var == 2)
System.out.println("better");
else if(var == 3)
System.out.println("best");
else
System.out.println("invalid")
*/
#include<stdio.h>
int main()
{
    int  var;
    printf("Enter value:");
    scanf("%d",&var);
    switch(var==1)
    {
    case 1: printf("Good");
    break;
    case 0:
        switch(var==2)
        {
            case 1:printf("better");
            break;
            case 0:switch(var==3)
            {
                case 1: printf("best");
                break;
                case 0: printf("Invalid");
                break;
            }
            break;
        }
        break;
    }
    return 0;
}
