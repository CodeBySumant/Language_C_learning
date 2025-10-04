# include <stdio.h>
int main() {

    // variable declaration
    int first_number, Secound_number, sum;
    
    // user input
    printf("Enter First Number integers: ");
    scanf("%d", &first_number);

    printf("Enter Second Number integers: ");
    scanf("%d", &Secound_number);

    // sum calculation
    sum = first_number + Secound_number;

    // output
    printf("Sum: %d\n", sum);
    return 0;
}