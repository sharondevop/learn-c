#include <stdio.h> /*  tells the compiler to include information about the standard input/output library  */

/* count characters in input; 1st version   */
main() 
{

	long nc; 					// declare  long  variable (at least 32 bits).
	
	nc = 0; 					// initialize nc to 0.
	while (getchar() != EOF) 	// tests whether the character is not  the end-of-file signal.	EOF = -1			 
		++nc; 					// increment by one
	printf("%ld\n", nc); 		// the conversion specification %ld tells printf that the corresponding argument is long integer.
	
}