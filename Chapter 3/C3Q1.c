#include <stdio.h>

int main(void){
    int month, day, year;
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Month entered was: %d\n", month);
    printf("Day entered was: %d\n", day);
    printf("Year entered was: %d\n", year);
    return 0;
}