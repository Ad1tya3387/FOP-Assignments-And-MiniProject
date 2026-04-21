#include <stdio.h>

int main() {
    float marks[5], sum = 0, avg;
    printf("Enter marks for 5 subjects: ");
    for(int i=0; i<5; i++) {
        scanf("%f", &marks[i]);
        sum += marks[i];
    }
    avg = sum / 5;
    printf("Percentage: %.2f%%\n", avg);
    
    if (avg >= 90) printf("Grade: A\n");
    else if (avg >= 75) printf("Grade: B\n");
    else if (avg >= 50) printf("Grade: C\n");
    else printf("Grade: F\n");
    return 0;
}