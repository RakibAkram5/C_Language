#include <stdio.h>

int main() {
    float radius;
    float area;
    
    // Prompt the user for the radius
    printf("Enter the radius: ");
    // Use "%f" to read a float, not "2.%f"
    scanf("%f", &radius);
    
    // Calculate the area of the circle using the formula: area = p * radius^2
    area = 3.14 * radius * radius;
    
    // Print the result. "%.2f" displays the area with 2 decimal places.
    printf("Area of a circle: %.2f\n", area);
    
    return 0;
}

