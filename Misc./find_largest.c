#include <stdio.h>

int main(void){
    // Variables
    int input;
    int max = 0;
    
    // User input
    printf("Enter a number (Input '0' to stop): ");
    scanf("%d", &input);

    // Loop (continues until the user inputs 0)
    while (input != 0){
        if(input > max){
            max = input; // Save inputted value (ONLY if you've successfully inputted a larger number)
        }
        // Prompt for input again
        printf("Enter a number: ");
        scanf("%d", &input); // Will end once the user inputs 0.
    }

    printf("The maximum is: %d", max);

}