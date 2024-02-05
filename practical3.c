#include <stdio.h>

int main() {
    int i, num, sum = 0;

    printf("Enter up to 5 numbers. Enter a negative number to skip.\n");

    for (i = 1; i <= 5; ++i) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num < 0) {
            printf("Negative number skipped.\n");
            continue;
        }

        sum += num;
    }

    printf("Sum of non-negative numbers: %d\n", sum);

    return 0;
}
