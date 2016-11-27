#include <stdio.h> /*  tells the compiler to include information about the standard input/output library  */

/* Exercise 1.6 - Verify that the expression getchar() != EOF is 0 or 1 */
main()
{
	int c; // declare integer variable
	while ((c = getchar()) != EOF) { 
		printf("%d ", c != EOF); // print the value of the expression  getchar()!= EOF
		putchar(c); /* print the contents of the integer variable c as a character, on the screen  */
		
	}
	
	printf("\n%d\n", c != EOF); // print the value of the expression getchar()!= EOF
}
 