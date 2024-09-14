#include <stdio.h>

int main() {
    int i, j;

    printf("Multiplication table from 1 to 6:\n");

    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= 6; j++) {
            printf("%dx%d = %d\n", j, i, i * j);
        }
        printf("\n");
    }

    return 0;
}
