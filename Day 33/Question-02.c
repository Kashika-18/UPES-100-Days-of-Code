//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/

#include<stdio.h>
int main () {
    int n, a[100], i, num;
    scanf("%d", &n);

    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &num);

    i = n-1;

    while (i >= 0 && a[i] > num) {
        a[i + 1] = a[i];
        i--;
    }
    a[i+1] = num;
    n++;

    for (i=0; i<n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}