#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50], ch;

    // Read the filename from user
    printf("Enter the name of the file to write: ");
    scanf("%s", filename);

    // Open the file in write mode
    fp = fopen(filename, "w");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read input from keyboard and write it into the file
    printf("Enter text (Press Ctrl+D to stop):\n");
    while ((ch = getchar()) != EOF) {
        fputc(ch, fp);
    }

    // Close the file
    fclose(fp);

    printf("File written successfully!\n");

    return 0;
}

