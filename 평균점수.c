#include <stdio.h>

int main() {
    int scores[5];
    int i;
    int total = 0;

    for (i = 0; i < 5; i++) {
        scanf("%d", &scores[i]);
        scores[i] = (scores[i] < 40) ? 40 : scores[i];
        total += scores[i];
    }

    int average = total / 5;

    printf("%d\n", average);

    return 0;
}