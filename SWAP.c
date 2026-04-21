#include <stdio.h>

void swapPointer(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;
    // Without pointers (using addition)
    x = x + y; y = x - y; x = x - y;
    printf("Without pointers: x=%d, y=%d\n", x, y);
    
    // With pointers
    swapPointer(&x, &y);
    printf("With pointers: x=%d, y=%d\n", x, y);
    return 0;
}