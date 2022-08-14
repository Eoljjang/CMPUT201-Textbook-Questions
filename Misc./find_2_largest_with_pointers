#include <stdio.h>

void find_two_largest(int n, int a[n], int *largest, int *second_largest); // Proto

int main(void){
    // Create array
    int n;
    printf("How long is the array? (minimum length of 2) ");
    scanf("%d", &n);
    int a[n];

    // Fill array with user input
    printf("Enter %d numbers, all separated with a space to fill the array.", n);
    for (int i = 0; i < n; i++){
        int input;
        scanf("%d", &input);
        a[i] = input;
    }

    // Create pointers. For now, they point to the first 2 elements of the array -> Since they must be initialized.
    int *largest = &a[0];
    int *second_largest = &a[1];
    find_two_largest(n, a, largest, second_largest);

    // Output
    printf("The largest number is: %d, and the second largest number is: %d\n", *largest, *second_largest);
    return 0;
}

// Function orders array in descending order
void find_two_largest(int n, int a[n], int *largest, int *second_largest){
    // Start sort 
    int temp;
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){ // Starts at index 1 since it needs to compare the next value.
            if (a[i] < a[j]){ // If (left value) < (right value)
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
            // Don't need an 'else' clause, cuz we don't need it to do anything if (right value) > (left value)
        }
    }
    // Set new largest and second largest value
    *largest = a[0];
    *second_largest = a[1];
}

