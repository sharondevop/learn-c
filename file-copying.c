#include <stdio.h>  /*  tells the compiler to include information about the standard input/output library  */

/* copy input to output; 1st version */
main()
{

	int c; /* declare integer variable */
	
	c = getchar(); /* getchar reads the next input character from a text strem and returns that as its value,
					the variable c contains the next character of input. */
	while (c != EOF) { 
		putchar(c); /* print the contents of the integer variable c as a character, on the screen  */
		c = getchar();		
	}
}