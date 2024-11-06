#include <stdio.h>

// Tail recursive function to calculate factorial
long long factorial_tail_recursive(int n, long long accumulator) {
    if (n == 0 || n == 1) {
        return accumulator;
    } else {
        return factorial_tail_recursive(n - 1, accumulator * n);
    }
}

long long factorial(int n) {
    return factorial_tail_recursive(n, 1);
}

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is: %lld\n", number, factorial(number));
    }

    return 0;
}
