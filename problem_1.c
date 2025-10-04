/*
    Write a program to calcuate area of square.
*/
#include <stdio.h>
int main() {

    // variable declaration
    float side;

    // user input
    printf("Enter side of square(in CM): ");
    scanf("%f", &side);

    // output
    printf("Area of square is: %.2f CM^2\n", side * side);
    return 0;
}