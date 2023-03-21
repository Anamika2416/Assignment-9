//Write a program which takes the day number of a week and displays a unique greeting message for the day.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter day number:");
    scanf("%d",&n);
    switch(n)
    {
        case 1: printf("Hey,it's Sunday.");
                break;
        case 2: printf("Hey,it's Monday.");
                break;
        case 3: printf("Hey,it's Tuesday.");
                break;
        case 4: printf("Hey,it's Wednesday.");
                break;
        case 5: printf("Hey,it's Thrusday.");
                break;
        case 6: printf("Hey,it's Friday.");
                break;
        case 7: printf("Hey,it's Saturday.");
                break;
        default:printf("Invalid day.");
    }
    return 0;
}
