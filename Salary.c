#include <stdio.h>

int main() {
    float basic, gross, da, hra;
    printf("Enter basic salary: ");
    scanf("%f", &basic);
    da = 0.20 * basic;
    hra = 0.10 * basic;
    gross = basic + da + hra;
    printf("Gross Salary: %.2f\n", gross);
    return 0;
}