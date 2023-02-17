#include <stdio.h>
#include <stdlib.h>

// Define the subject mark structure
typedef struct {
    char subject[50];
    float mark;
} subject_mark;

int main() {
    int n;

    // Read the number of subjects from user
    printf("Enter the number of subjects: ");
    scanf("%d", &n);

    // Allocate memory dynamically for an array of subject mark structures
    subject_mark *marks = (subject_mark *) malloc(n * sizeof(subject_mark));

    // Read subject and mark information from user
    for (int i = 0; i < n; i++) {
        printf("Enter subject %d: ", i+1);
        scanf("%s", marks[i].subject);
        printf("Enter mark for subject %d: ", i+1);
        scanf("%f", &marks[i].mark);
    }

    // Display the subject and mark information
    printf("Subject\tMark\n");
    for (int i = 0; i < n; i++) {
        printf("%s\t%.2f\n", marks[i].subject, marks[i].mark);
    }

    // Free the dynamically allocated memory
    free(marks);

    return 0;
}

