//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include<stdio.h>
int main() {
    int n, original, temp, last, first, result;
    int place = 1;
    printf("Enter a number = ");
    scanf("%d", &n);

    original = n;
    last = n%10;
    temp = n;
    while (temp >= 10) {
        temp = temp / 10;
        place  = place * 10;
    } 
    first = temp;
    result = original - (first * place) - last + (last * place) + first;
    printf("%d", result);

    return 0;
}
