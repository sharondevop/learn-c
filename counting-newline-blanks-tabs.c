#include <stdio.h>

/*	 Exercise   1-8 Count blanks, tabs, and newlines.  */

main()
{

	int c, nl, tab , blank; 						            /* declare c , nl , tab ,blank variable as integers */
	
	nl = 0;	tab = 0; blank = 0;				  				  /* initilize nl, tab, blank value to 0 */
	while ((c = getchar()) != EOF) 			   				 //  the while gets a character, assigns it to c, and then tests whether the character is not 
									   						//	the end-of-file signal.	EOF = -1
		if(c == '\n')						               // test if c equal to  newline 
			++nl; 						                  // increment nl value with 1
		else if (c == '\t')				            	 // test if c equal to  tabs
			++tab;							            // increment tab value with 1
		else if (c == ' ')							   // test if c equal to  blank
			++blank;							      // increment blank value with 1
	printf("Number of new line %d\n", nl); 		     //print nl value
	printf("Number of tabs %d\n", tab);			    // print tab value
	printf("Number of blank %d\n", blank);		   // print blank value
			
}

