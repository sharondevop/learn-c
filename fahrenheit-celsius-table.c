#include <stdio.h>

/* print Fahrenheit-Celsius table
  for fahr = 0, 20, ..., 300 */
int main()
{
    int fahr, celsius; /* declared variables , listed as integers */
    int lower, upper, step; /* declared variables , listed as integers */

    lower = 0;       /* lower limit of temperature table */
    upper = 300;     /* upper limit */
    step = 20;      /* step size */

    fahr = lower;  /* initial fahr value to lower (0) */
    /* create table using loop */
    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
        printf("%3d\t%6d\n", fahr, celsius); /* print state-ment with a width  */ 
        fahr = fahr + step;

    }

}
