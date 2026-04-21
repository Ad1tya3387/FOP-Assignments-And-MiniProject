#include <stdio.h>

int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("GCD: %d\n", gcd(a, b));
    
    // Finding smallest common divisor > 1
    int min = (a < b) ? a : b;
    int found = 0;
    for(int i = 2; i <= min; i++) {
        if(a % i == 0 && b % i == 0) {
            printf("Smallest common divisor: %d\n", i);
            found = 1; break;
        }
    }
    if(!found) printf("No common divisor > 1 found.\n");
    return 0;
}