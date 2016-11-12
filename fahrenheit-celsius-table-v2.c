#include <stdio.h>  /*  tells the compiler to include information about the standard input/output library  */

/* print Fahrenheit-Celsius table  */	
int main() 		/* define a function named main as integer that receives no argument values */						
{
	int fahr; 			/* declare integer variable */
	
	for (fahr = 0; fahr <= 300; fahr = fahr + 20) /*  for statement loop, the first part, the initialization,
													 the second part is the condition that controls the loop ,
													  if it is true, the body of the loop is executed
													 (printf) then the increment step  */
		
		printf("%3d\t %6.1f\n", fahr, (5.0/9.0)*(fahr-32));  /* print fahr as decimal integer, at least 3 characters wide,
																print fahr (celsius) as  floating point, 
																at least 6 characters wide and 1 after decimal point */
}

