#include <stdio.h>
#include <stdlib.h> // Required for exit()

int main() {
    FILE *fptr1, *fptr2;
    char c;

    // Open source file in read mode
    fptr1 = fopen("source.txt", "r");
    if (fptr1 == NULL) {
        printf("Cannot open source file. Please create 'source.txt' first.\n");
        exit(0);
    }

    // Open destination file in write mode
    fptr2 = fopen("destination.txt", "w");
    if (fptr2 == NULL) {
        printf("Cannot open destination file.\n");
        fclose(fptr1);
        exit(0);
    }

    // Read characters from file 1 and write them to file 2
    c = fgetc(fptr1);
    while (c != EOF) {
        fputc(c, fptr2);
        c = fgetc(fptr1);
    }

    printf("Contents copied successfully to destination.txt\n");

    // Always close files to save data
    fclose(fptr1);
    fclose(fptr2);

    return 0;
}