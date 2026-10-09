//Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/

#include<stdio.h>
int main() {
    int i, j, a[100][100], rows, cols;

    scanf("%d %d", &rows, &cols);

    for (i=0; i<rows; i++) {
        for (j=0; j<cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

     for (i=0; i<rows; i++) {
        for (j=0; j<cols; j++) {
            printf("%d ", a[i][j]);
     
       }
       printf("\n");
    }
    return 0;
}