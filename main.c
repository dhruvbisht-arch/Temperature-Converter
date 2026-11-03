#include <stdio.h>
#include "functions.h"

int main()
{
    double val;
    int choice;
    char c;
    do
    {
        printf("1: Celcius to Fahrenheit\n2: Celcius to Kelvin\n"); 
        printf("3: Fahrenheit to Celcius\n4: Fahrenheit to Kelvin\n"); 
        printf("5: Kelvin to Celcius\n6: Kelvin to Fahrenheit\n7: Exit\n\n");
        printf("Enter choice\n");
        scanf("%d",&choice);
        if(choice==7)
        {
            printf("Exiting.....\n");
            return 0;
        }
        printf("Enter value to convert: "); 
        scanf("%lf",&val);
        
        switch (choice)
        {
        case 1:
            celcius_to_fahrenheit(&val);
            printf("%.2fF\n",val);
            break;
        case 2:
            celcius_to_kelvin(&val);
            printf("%.2fK\n",val);
            break;
        case 3:
            fahrenheit_to_celcius(&val);
            printf("%.2fC\n",val);
            break;  

        case 4:
            fahrenheit_to_kelvin(&val);
            printf("%.2fK\n",val);
            break;
        case 5:
            kelvin_to_celcius(&val);
            printf("%.2fC\n",val);
            break;
        case 6:
            kelvin_to_fahrenheit(&val);
            printf("%.2fF\n",val);
            break;      
        default:
            printf("Invalid argument try again\n");
            break;
        }
        val=0;
        printf("\nDo you want to continue(y/n)?\n");
        scanf(" %c",&c);
    }while(c=='y'||c=='Y');

    return 0;
}