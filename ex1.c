//Experimenting the Mathematical Functions
    /*This example calculates the absolute value of an integer x and assigns it to y. (clone of https://www.ibm.com/docs/da/i/7.4?topic=functions-abs-calculate-integer-absolute-value#absolut__title__7)*/


#include <stdlib.h>
#include <stdio.h>

int main(void) 
{
        int x = -4, y;
        y = abs(x);

        printf("The absolute value of x is %d.\n", y);

    /********************* Output **************************
            The absolute value of x is 4.
    *****************************************************/
}
