#include <stdio.h>

int factorial(x){
    int fact = 1;
    for (int i = 1; i <= x; i++){
        fact = fact * i;
    }
    return fact;
}

int main(void){
    int n;
    double e = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        e = e + (1.0/factorial(i));
    }
    printf("The value of e is: %.13f", e);
    
    return 0;
}
