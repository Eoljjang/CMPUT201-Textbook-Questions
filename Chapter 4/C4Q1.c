#include <stdio.h>
// Added support for 2-digit negative numbers.

int main(void){
    int input;
    printf("Enter a 2-digit number: ");
    scanf("%d", &input);

    // Reverse number (accounting for negatives)
    int first_dig;
    first_dig = (input % 10);


    // Only second digit matters if its negative (since it obviously can't be)
    int sec_dig;
    sec_dig = (input / 10);

    // Check if negative
    if (sec_dig < 0){
        sec_dig *= -1;
    }

    printf("Here's the reversed number: %d%d", first_dig, sec_dig);

}