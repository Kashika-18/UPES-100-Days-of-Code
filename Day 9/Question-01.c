// Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/

#include<stdio.h>
#include<math.h>
int main () {
    int a, b, c, x, D, y;  /*where a, b, c are the the parts of eqn ax^2+bx+c=0
    D = discriminant*/ 

    printf("Enter three numbers = ");
    scanf("%d %d %d", &a, &b, &c);
    D = (b*b) - 4*a*c;
    x = (-b + sqrt(D))/(2*a);
    y = (-b - sqrt(D))/(2*a);
    if (D > 0) {
        printf("Roots are real and different : %d, %d.\n", x, y);
    } else if (D == 0) {
        printf("Roots are real and same : %d", x);
    } else {
        printf("Roots are complex");
    }
return 0;
}
