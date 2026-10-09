//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/

#include<stdio.h>
int main () {
    int n, a[100], i;
    int largest, secondlargest;
    
    scanf("%d", &n);

    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    if (a[i] > a[i]) {
        largest = a[0];
        secondlargest = a[1];
    } else {
        largest = a[1];
        secondlargest = a[0];
    }

    for (i=2; i<n; i++) {
        if (a[i] > largest) {
            secondlargest = largest;
            largest = a[i];
        } else if (a[i] > secondlargest) {
            secondlargest = a[i];
        }
    }
    printf("%d", secondlargest);

    return 0;
}