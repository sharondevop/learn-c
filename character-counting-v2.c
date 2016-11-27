#include <stdio.h> /*  tells the compiler to include information about the standard input/output library  */

/* count characters in input; 2nd version */
main()
{

	double nc; // declare double variable
	
	for (nc = 0; getchar() != EOF; ++nc) // initilize nc value to 0 , test character is not EOF , and increment nc with 1.
		; // null statement needed no body 
	printf("%.0f\n", nc); //printf uses %f for float and double; %.0f suppresses printing of the decimal point and the fraction part, which is zero.

}