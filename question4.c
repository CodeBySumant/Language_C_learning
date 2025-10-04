/*
    write a program to calcuate area of a circle.
*/
#include <stdio.h>
int main() {

    // variable declaration
    float radius;

    // user input
    printf("Enter radius of circle(in CM): ");
    scanf("%f", &radius);

    // output
    printf("Area of circle is: %.2f CM^2\n", 3.14 * radius * radius);
    return 0;
}