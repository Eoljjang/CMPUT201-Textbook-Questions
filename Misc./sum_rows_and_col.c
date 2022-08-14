#include <stdio.h>
#define ARRAY_SIZE 2

int main(void){
    int array[ARRAY_SIZE][ARRAY_SIZE];
    int total;

    // Fill array
    for (int i = 0; i < ARRAY_SIZE; i++){
        printf("Enter %d values for row %d: ", ARRAY_SIZE, i + 1);
        for (int j = 0; j < ARRAY_SIZE; j++){
            scanf("%d", &array[i][j]); 
        }
    }

    // Sum rows
    printf("Row totals: ");
    for (int i = 0; i < ARRAY_SIZE; i++){ // Each new iteration here is the next row
        total = 0; // Set each new row total to 0
        for(int j = 0; j < ARRAY_SIZE; j++){
            total += array[i][j]; // Sums total in that row
        }
        printf("%d ", total); // Total for that row
    }

    // Sum columns
    printf("\nColumn totals: ");
    for (int i = 0; i < ARRAY_SIZE; i++){ // Each new iteration here is the next column.
        total = 0; // Set each new column total to 0.
        for(int j = 0; j < ARRAY_SIZE; j++){
            total += array[j][i]; // Swap 'i' and 'j' to access columns.
        }
        printf("%d ", total); // Total for that column.
    }
    return 0;
}