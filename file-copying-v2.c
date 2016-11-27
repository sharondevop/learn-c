#include <stdio.h> /*  tells the compiler to include information about the standard input/output library  */

/* copy input to output; 2and version  */
main()
{
	int c; // declare integer variable 
	
	while ((c = getchar()) != EOF) // the while gets a character, assigns it to c, and then tests whether the character was 
								  //	the end-of-file signal.	EOF = -1
		putchar(c); /* print the contents of the integer variable c as a character, on the screen  */

}