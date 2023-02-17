#include <stdio.h>
#include <string.h>

#define MAX_NAMES 100

void sortNames(char names[][100], int numNames, int order) {
    char temp[100];
    int i, j;
    for (i = 0; i < numNames - 1; i++) {
        for (j = i + 1; j < numNames; j++) {
            if (order == 1) { // sort in ascending order
                if (strcmp(names[i], names[j]) > 0) {
                    strcpy(temp, names[i]);
                    strcpy(names[i], names[j]);
                    strcpy(names[j], temp);
                }
            } else if (order == 2) { // sort in descending order
                if (strcmp(names[i], names[j]) < 0) {
                    strcpy(temp, names[i]);
                    strcpy(names[i], names[j]);
                    strcpy(names[j], temp);
                }
            }
        }
    }
}

int main() {
    char names[MAX_NAMES][100];
    int numNames, i, order;
    printf("Enter the number of names: ");
    scanf("%d", &numNames);
    printf("Enter the names: \n");
    for (i = 0; i < numNames; i++) {
        scanf("%s", names[i]);
    }
    printf("Enter 1 for ascending order or 2 for descending order: ");
    scanf("%d", &order);
    sortNames(names, numNames, order);
    printf("Sorted names: \n");
    for (i = 0; i < numNames; i++) {
        printf("%s\n", names[i]);
    }
    return 0;
}

