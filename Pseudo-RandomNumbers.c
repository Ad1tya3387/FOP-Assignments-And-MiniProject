#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, i;
    printf("How many random numbers to generate? ");
    scanf("%d", &n);

    // Seed the random generator
    srand(time(0));

    printf("Random numbers:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", rand() % 100); // Generates 0-99
    }
    return 0;
}