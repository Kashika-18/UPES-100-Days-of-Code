//Q74: Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/

#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int a[100][100];

    scanf("%d %d", &rows, &cols);

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (j = 0; j < cols; j++) {
        for (i = 0; i < rows; i++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}