// Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main() {
    float cp, sp, profit, loss;

    printf("Enter Cost Price: ");
    scanf("%f", &cp);

    printf("Enter Selling Price: ");
    scanf("%f", &sp);

    if (sp > cp) {
        profit = ((sp - cp) / cp) * 100;
        printf("Profit = %.2f%%", profit);
    }
    else if (cp > sp) {
        loss = ((cp - sp) / cp) * 100;
        printf("Loss = %.2f%%", loss);
    }
    else {
        printf("No Profit, No Loss");
    }

    return 0;
}
