#include <stdio.h>


double sqrt(double n){
    double start = 1;
    double mid;

    // Start search: 
    // Stops when the difference between the min & max of the range is <= 0.00001 (to 5 decimal places).
    // As such, this program is rounded to the 5th decimal.
    while ((n - start) >= 0.00001){
        // Find mid value
        mid = (start + n) / 2;

        // If answer is in lower half
        if ((mid * mid) >= n){
            n = mid;
        }
        // If answer is in upper half
        else if ((mid * mid) <= n){
            start = mid;
        }
        
        // Mid is the answer
        else{
            break;
        }
    }
    return mid;
}

int main(void){
    // "%lf" is for a double
    double input;
    double answer;
    printf("Enter a number: ");
    scanf("%lf", &input);

    answer = sqrt(input);
    printf("The square root is: %.5lf", answer);

    return 0;
}
