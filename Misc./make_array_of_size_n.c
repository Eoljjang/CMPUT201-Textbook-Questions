#include <stdio.h>

int main(void){
    int i, array_size;

    // Determine size of array
    printf("How many elements will be in the array? ");
    scanf("%d", &array_size); 
    int my_array[array_size]; // C99 only -> Length of array depends on 'n'

    // Fill the array with use input
    printf("Enter %d values (each value separate with a space): ", array_size);
    for (i = 0; i < array_size; i++){
	    scanf("%d", &my_array[i]); // Set each element of the array to the user's input (each element is separated w/ a whitespace)
    }

    // Print contents of array
    printf("The array has the values: ");
    for (i = 0; i < array_size; i++){
        printf("%d ", my_array[i]);
    }
    printf("\n");

}

