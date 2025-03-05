#include <stdio.h>

int main() {
    char ch;
    int step;
    
    // Prompt and read a character from the user
    printf("Enter the character: ");
    scanf("%c", &ch);
    
    // Prompt and read the step value (an integer) from the user
    printf("Enter step: ");
    scanf("%d", &step);  // Use "%d" to read an integer
    
    // Add the step value to the character (this shifts the character by 'step' positions)
    ch = ch + step;
    
    // Print the new character
    printf("New Character: %c\n", ch);
    
    return 0;
}

