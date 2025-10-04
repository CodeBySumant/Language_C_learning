/*
    write a program to caculate perimeter of rectangle.
*/
#include <stdio.h>
int main() {
    // variable declaration
    float length, breadth;

    // user input
    printf("Enter length of rectangle(in CM): ");
    scanf("%f", &length);

    printf("Enter breadth of rectangle(in CM): ");
    scanf("%f", &breadth);

    // output
    printf("Perimeter of rectangle is: %.2f CM\n", 2 * (length + breadth));
    return 0;
}