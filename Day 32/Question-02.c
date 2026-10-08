//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

#include <stdio.h>

int main() {
    int n, digit, i;
    int a[10] = {0};
    int max = 0, mostDigit = 0;

    printf("Enter number = ");
    scanf("%d", &n);

    // Count occurrence of each digit
    while (n > 0) {
        digit = n % 10;
        a[digit]++;
        n = n / 10;
    }

    // Find the digit occurring maximum times
    for (i = 0; i < 10; i++) {
        if (a[i] > max) {
            max = a[i];
            mostDigit = i;
        }
    }

    printf("%d", mostDigit);

    return 0;
}