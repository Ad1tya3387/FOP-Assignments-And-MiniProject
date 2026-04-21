#include <stdio.h>

int main() {
    int n, arr[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);

    printf("Even numbers: ");
    for(int i=0; i<n; i++) if(arr[i] % 2 == 0) printf("%d ", arr[i]);

    printf("\nOdd numbers: ");
    for(int i=0; i<n; i++) if(arr[i] % 2 != 0) printf("%d ", arr[i]);
    
    return 0;
}