#include <stdio.h>

/*
 * Exercise 1-9
 * Write a program to copy its input to its output,
 * replacing each string of one or more blanks by a single blank.
 */

main()
{
	
	int c; // declare variable c as integer 
	
	while ( (c = getchar()) != EOF ) /*  tests whether the character is not  the end-of-file signal.	EOF = -1 */ 
	{
		if (c == ' ') /* tell the machine to check if the character is equal to blank , if it blank , change state */
		{
			putchar(c); /* tell the machine to print to standart output the blank character */
			while ( (c = getchar()) == ' ') /*	look for succeeding blanks then.. */
				; /* do nothing */	
		}
	
		if (c != ' ') /* tell the machine to check if the character is not blank to take execute this next line. */
		putchar(c); /*	tell the machine to  print to screen the character */
	}
		
	
}
