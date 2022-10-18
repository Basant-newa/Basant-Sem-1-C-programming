// WAP to read two numbers and find the quotient and reminder.
#include <stdio.h>

int main() {
  int x, y;
  printf("Enter the Dividend: ");
  scanf("%d", &x);
  printf("Enter the Divisor: ");
  scanf(" %d", &y);
  printf("Quotient: %d \n", x/y);
  printf("Remainder: %d", x%y);
  return 0;
}
