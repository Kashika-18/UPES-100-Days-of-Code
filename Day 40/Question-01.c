//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/



#include <stdio.h>

int main() {
    int rows, cols, i, j, d;
    int a[100][100];

    scanf("%d %d", &rows, &cols);

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (d = 0; d < rows + cols - 1; d++) {

        if (d % 2 == 0) {
            for (i = d; i >= 0; i--) {
                j = d - i;

                if (i < rows && j < cols) {
                    printf("%d ", a[i][j]);
                }
            }
        } else {
            for (j = d; j >= 0; j--) {
                i = d - j;

                if (i < rows && j < cols) {
                    printf("%d ", a[i][j]);
                }
            }
        }
    }

    return 0;
}