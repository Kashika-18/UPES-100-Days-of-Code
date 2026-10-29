//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/



#include <stdio.h>

int main() {
    char str[200];
    int i, start, end;
    char temp;

    fgets(str, sizeof(str), stdin);

    start = 0;

    for (i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {
            end = i - 1;
            while (start < end) {
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;

                start++;
                end--;
            }
            start = i + 1;
        }

        if (str[i] == '\0') {
            break;
        }
    }

    printf("%s", str);

    return 0;
}