#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    printf("Enter two strings: ");
    scanf("%s %s", s1, s2);

    printf("Length of s1: %ld\n", strlen(s1));
    printf("Equality check: %s\n", (strcmp(s1, s2) == 0) ? "Equal" : "Not Equal");
    
    // Palindrome check
    char rev[100];
    strcpy(rev, s1);
    strrev(rev); 
    printf("Palindrome check: %s\n", (strcmp(s1, rev) == 0) ? "Yes" : "No");
    return 0;
}