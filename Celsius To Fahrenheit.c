#include <stdio.h>

int main() {
    float c;
    printf("Enter the Temperature in Celsius: ");
    scanf("%f", &c);
    
    // Correct floating-point division and conversion formula
    float f = (9.0/5.0) * c + 32;
    
    printf("%.2f Celsius is equivalent to %.2f Fahrenheit.\n", c, f);
    return 0;
}

