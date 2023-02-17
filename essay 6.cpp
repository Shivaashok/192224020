#include <stdio.h>
#include <stdlib.h>

#define MAX_NUMBERS 100

int main() {
    int numbers[MAX_NUMBERS], n, i, j;
    float mean, median;
    int mode, maxValue = 0, maxCount = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    mean = 0;
    for (i = 0; i < n; i++) {
        mean += numbers[i];
    }
    mean /= n;
    printf("Mean: %f\n", mean);
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (numbers[i] > numbers[j]) {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    if (n % 2 == 0) {
        median = (numbers[n / 2] + numbers[n / 2 - 1]) / 2.0;
    } else {
        median = numbers[n / 2];
    }
    printf("Median: %f\n", median);
    for (i = 0; i < n; i++) {
        int count = 1;
        for (j = i + 1; j < n; j++) {
            if (numbers[i] == numbers[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            mode = numbers[i];
        }
    }
    printf("Mode: %d\n", mode);

    return 0;
}

