#include <stdio.h>

int main() {
    int number;
    printf("Enter a 6-digit Number: ");
    scanf("%d", &number);

    int first_digit = number / 100000; // For a 6-digit number, this extracts the first digit
    int last_digit = number % 10;      // This extracts the last digit
    int sum = first_digit + last_digit;
    
    printf("The sum of the first and last digit is: %d\n", sum);
    return 0;
}

