#include <stdio.h>

int main(void){
    int area, first, second;
    printf("Enter a phone number: (xxx) xxx-xxxx: ");
    scanf("(%d) %d-%d", &area, &first, &second);

    printf("You entered: %d.%d.%d", area, first, second);


    return 0;
    
    
}

/* Problem: 
1. Write a program that takes input for a phone number in the form (xxx) xxx-xxxx
2. Output it as xxx.xxx.xxxx
*/