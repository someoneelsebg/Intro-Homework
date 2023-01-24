#include <stdio.h>

int main() {
    int rows;
    char number[rows];
    scanf("%d", &rows);
    int i, j;

    printf("1\n");
    for (i = 0; i < rows - 1; i++) {
        printf("1");
        for (j = 0; j <= i; j++) {
            number[j] = '0';
        }
        printf("%s1\n", number);
    }
    return 0;
}

