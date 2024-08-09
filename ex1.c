//Experimenting the Mathematical Functions
    /*This example calculates y as the absolute value of x:*/

#include <math.h>
#include <stdio.h>

int main(void) 
{
       double x, y;

       x = -2.718281;
       y = fabs(x);

       printf("fabs (%lf) = %lf\n", x, y);  
}

/*******************  Output should be similar to:  ***************
                      fabs( -2.7181281 ) = 2.718281
*******************************************************************/
