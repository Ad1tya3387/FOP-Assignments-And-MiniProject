#include <stdio.h>
#include <math.h>

// Function to compute factorial
long long getFactorial(int n) {
    if (n < 0) return -1;
    long long fact = 1;
    for(int i = 1; i <= n; ++i) fact *= i;
    return fact;
}

int main() {
    int choice;
    double num1, num2;

    printf("--- Simple Calculator ---\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n");
    printf("4. Division\n5. Power\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 5) {
        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);
    } else if (choice == 6) {
        printf("Enter a number: ");
        scanf("%lf", &num1);
    } else {
        printf("Invalid choice.\n");
        return 1;
    }

    switch(choice) {
        case 1:
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case 2:
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case 3:
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case 4:
            if (num2 != 0) printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            else printf("Error! Division by zero.\n");
            break;
        default:
            printf("Invalid operation.\n");
    }

    return 0;
}