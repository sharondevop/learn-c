#include <stdio.h>

/*
 * Exercise 1-9-v2
 * Write a program to copy its input to its output,
 * replacing each string of one or more blanks by a single blank.
 */
  

int main(void)
{
	int c; 							// declare variable c as  integer 
	int inspace;	   				//  declare variable inspace as integer
	
	inspace = 0;         			// initialize inspace value to 0.
	while ((c = getchar()) != EOF ) /*  tests whether the character is not  the end-of-file signal.	EOF = -1 */
	{	
	  if( c == ' ') 				// tell the machine to check if the character equal to blank.
	  {
	    if(inspace == 0) 			// test inspace value equal to 0
	    {
	      inspace = 1; 			// set  inspace  value to 1
	      putchar(c);   			// print blank character to screen
	    }

	  }
	  if( c != ' ') 				// test character not equal blank
	  {
	  	inspace = 0; 				// set the inspace value to 0
	  	putchar(c);	
	  }
	
	}
	
	return 0; // tell us that everthing worked just fine.
}
	
	