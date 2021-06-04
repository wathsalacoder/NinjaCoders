#include <stdio.h>
#include <stdlib.h>

/* Length Converter by NinjaCoders */

int main()
{
    /* Variables */

    double userValue;
    char c_or_m;

    /* Storing Values in variables */

    printf("Enter your value : ");
    scanf("%lf", &userValue);
    printf("(C)m or (M)eters : ");
    scanf(" %c", &c_or_m);

    /* Check the user values */

    if(c_or_m == 'C' || c_or_m == 'c')
    {

        printf("You answer in meters is %f", userValue / 100);
        /* CM to Meters */

    }
    else if(c_or_m == 'M' || c_or_m == 'm')
    {

        printf("Your answer in centimeters %f", userValue * 100);
        /* Meters to CM */

    }
    else
    {
        /* Show to user that he/she enter invalid value */

        printf("Invalid Value Plz try again !");
    }

    getch();

    return 0;

}


/* Code end Wathsala Dewmina's first project */
