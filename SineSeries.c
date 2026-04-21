#include <stdio.h>
#include <math.h>

int main() {
    float x, radian, sum = 0, term;
    int n, i;
    printf("Enter x (in degrees) and number of terms: ");
    scanf("%f %d", &x, &n);
    
    radian = x * (3.14159 / 180.0);
    term = radian;
    sum = term;

    for (i = 1; i <= n; i++) {
        term = -term * radian * radian / ((2 * i) * (2 * i + 1));
        sum += term;
    }
    printf("Sin(%.2f) = %.4f\n", x, sum);
    return 0;
}