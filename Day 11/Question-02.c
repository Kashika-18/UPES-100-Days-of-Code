// Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/

#include<stdio.h>
int main() {
    int SP, CP, Profit, Loss, Loss_percentage,  Profit_percentage ;
    printf("Enter CP, SP = ");
    scanf("%d %d", &CP, &SP);

    if (SP > CP) {
        Profit = SP - CP;
        Profit_percentage = (Profit * 100) / CP;
        printf("Profit %d%%", Profit_percentage);
    } else if (CP > SP) {
        Loss = CP - SP;
        Loss_percentage = (Loss * 100) / CP;
        printf("Loss %d%%", Loss_percentage);
    } else {
        printf("No Profit No Loss");
    }
    return 0;
}
