#include <stdio.h>
#include <math.h>

// Function to calculate factorial iteratively
long long getFactorial(int n) {
    if (n < 0) return -1; // Error code for negative inputs
    long long fact = 1;
    for(int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

// Function to print prime factors
void printPrimeFactors(int n) {
    printf("Prime factors: ");
    if (n < 2) {
        printf("None (number is less than 2)");
        return;
    }

    // Print the number of 2s that divide n
    while (n % 2 == 0) {
        printf("2 ");
        n /= 2;
    }

    // n must be odd at this point. Skip one element (i = i + 2)
    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }

    // If n is a prime number greater than 2
    if (n > 2)
        printf("%d", n);
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    // 1. Square Root
    printf("Square root of %d: %.2f\n", num, sqrt(num));

    // 2. Cube
    // Using pow() from math.h
    printf("Cube of %d: %.0f\n", num, pow(num, 3));

    // 3. Factorial
    long long fact = getFactorial(num);
    if (fact == -1) printf("Factorial is not defined for negative numbers.\n");
    else printf("Factorial of %d: %lld\n", num, fact);

    // 4. Prime Factors
    printPrimeFactors(num);
    printf("\n");

    return 0;
}