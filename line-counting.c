#include <stdio.h> /*  tells the compiler to include information about the standard input/output library  */

/*	count lines in input  */

main()
{

	int c, nl; 						// declare c and nl variable integers 
	
	nl = 0; 						  // initilize nl value to 0 
	while ((c = getchar()) != EOF)		// the while gets a character, assigns it to c, and then tests whether the character is not 
									    //	the end-of-file signal.	EOF = -1
		if (c == '\n') 				   // test if c is equal to \n 
			++nl; 					  // increment nl value with 1
	printf("%d\n", nl); 		     // print the value of nl as decimal integer

}