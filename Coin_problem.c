# include <stdio.h>

int main() {
int totalAmount;

printf("Enter the collected amount: ");
scanf("%d", &totalAmount);

int tenRupeeCoins = totalAmount / 10;
totalAmount %= 10;

int fiveRupeeCoins = totalAmount / 5;
totalAmount %= 5;

int oneRupeeCoins = totalAmount;

// Print the total amount and coin distribution
printf("Collected %d rupees\n", tenRupeeCoins * 10 + fiveRupeeCoins * 5 + oneRupeeCoins);
printf("10 rupee coin = %d\n", tenRupeeCoins);
printf("5 rupee coin = %d\n", fiveRupeeCoins);
printf("1 rupee coin = %d\n", oneRupeeCoins);

return 0;
}