//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/



#include <stdio.h>

int main() {
    char str[200];
    char longest[100];
    int i, j;
    int length = 0, maxLength = 0;
    int start = 0, maxStart = 0;

    fgets(str, sizeof(str), stdin);

    for (i = 0; ; i++) {

        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {

            if (length > maxLength) {
                maxLength = length;
                maxStart = start;
            }

            length = 0;
            start = i + 1;
        } 
        else {
            length++;
        }

        if (str[i] == '\0') {
            break;
        }
    }

    for (j = 0; j < maxLength; j++) {
        longest[j] = str[maxStart + j];
    }

    longest[j] = '\0';

    printf("%s", longest);

    return 0;
}