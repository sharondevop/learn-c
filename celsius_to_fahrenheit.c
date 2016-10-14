#include <stdio.h>

/* print Celsius to fahrenheit table for
celsius = 0, 20, ..., 300; floating-point version */

int main()
{

  float fahr, celsius; /* declared variables, listed as float */
  int lower, upper, step; /* declared variables, listed as integers  */

  lower = 0;      /* lower limit of temperature table */
  upper = 300;    /* upper limit */
  step = 20;      /* step size */

  celsius = lower; // initial celsius value to lower (0)
  printf ("Celsius (C)\tFahrenheit (F)\n"); // Print heading above the table
  // Create conversion table using  loop.
  while (celsius <= upper) {
      fahr = (celsius * 9.0) / 5.0 + 32;/* calculation using float type */
      printf("%3.0f\t\t%6.0f\n", celsius, fahr ); /* print conversion table  */
      celsius = celsius + step; // increase value by 20
  }


}
