#include <stdio.h>

int main(void){
    int num, count;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Find number of digits
    while((num/10) != 0){
        num = num / 10; // If it can divide by 10, then that is a digit.
        count++; // Increment the digit counter.
    }

    printf("The number of digits is: %d\n", count);
    return 0;
}