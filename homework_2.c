/*
    take a number(n) from user & output its cube
*/
#include <stdio.h>
int main() {

    // variable declaration
    int n;

    // user input
    printf("Enter a number: ");
    scanf("%d", &n);

    // output
    printf("Cube of %d is: %d\n", n, n * n * n);
    return 0;
}