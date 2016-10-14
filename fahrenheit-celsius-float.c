#include <stdio.h>

/* print Fahrenhit-Celsius table for
fahr = 0, 20, ..., 300; floating-point version */

int main()
{

  float fahr, celsius;
  int lower, upper, step;

  lower = 0;              /* lower limit of temperature table */
  upper = 300;            /* upper limit */
  step = 20;              /*  step size  */

  fahr = lower;   /* initial fahr value to lower (0) */
  printf("Fahrenhit (F)\tCelsius (C)\n"); /* Print heading above the table */
  /* create conversion table using loop */
  while (fahr <= upper) {
      celsius = (5.0/9.0) * (fahr-32.0); /*  calculation using float type */
      printf("%3.0f\t\t%6.2f\n", fahr, celsius); /* print conversion table */
      fahr = fahr + step; // increase value by 20
  }

}
