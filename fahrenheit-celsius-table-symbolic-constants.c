/* Header Files */
#include <stdio.h> 			/*  tells the compiler to include information about the standard input/output library  */

/* Constants */
#define 	LOWER 	0 		/* lower the limit of table */
#define 	UPPER 	300 	/* upper limit */
#define 	STEP 	20 		/*  step size */

/*  print Fahrenheit-Celsius table */
int main() /* define a function named main as integer that receives no argument values */
{ /* BEGIN */

	int fahr; /* declare integer variable */
	
	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) /*  for statement loop, using symbolic-constants */
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32)); /* print fahr as decimal integer, at least 3 characters wide,
																print fahr (celsius) as  floating point, 
																at least 6 characters wide and 1 after decimal point */
																
} /* END */