/*Program to take the value from the user as input electricity unit charges
and calculate total electricity bill according to the given condition . Using
the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.
*/
#include<stdio.h>
int main()
{
    float x,amt=0.0,tot=0.0;
    printf("Enter units:");
    scanf("%f",&x);
    switch(x<=50)
    {

        case 1: amt=x*0.50;
        break;
        case 0:switch((x<=150)&&(x>=50))
        {
            case 1:amt=0.5*50+(x-50)*0.75;
            break;
            case 0:switch((x<=250)&&(x>=150))
            {
                case 1:amt=0.5*50+0.75*100+(x-150)*1.20;
            break;
            case 0:amt=0.5*50+0.75*100+1.20*100+(x-250)*1.50;
            break;
            }break;
        }break;
    }
    tot=amt+amt*0.20;
    printf("Total Amount=%f and amount %f",tot,amt);
    return 0;
}
