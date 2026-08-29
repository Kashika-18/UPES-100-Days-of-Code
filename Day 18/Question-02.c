// Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/

#include<stdio.h>
int main() {
    int a, b, i, hcf = 1, smaller;
    printf("Enter a numbers = ");
    scanf("%d %d", &a, &b);

    if (a<b) 
        smaller = a;
    else 
        smaller = b;
    
    for(i=1; i<=smaller; i++) {
        if (a%i==0 && b%i==0) {
            hcf = i;
        }
    }
    printf("%d", hcf);
    return 0;
}
