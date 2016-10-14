#include <stdio.h>

int main() {

int uid;
uid = getuid ();

printf("Caller's Id : %d\n", uid);

}
