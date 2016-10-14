#include <stdio.h>

int main () {

int var = 20;     /* actual variable declaration */
int *ip;         /* pointer variable declaration */

ip = &var;      /* store address of var in pointer variable */

printf("Address of var variable: %x\n", &var );     /* print address stored in var variable */

printf("Address stored in ip variable: %x\n", ip );     /*  address stored in pointer variable */

return 0;

}
