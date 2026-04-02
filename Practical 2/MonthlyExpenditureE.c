#include<stdio.h>

int main() {
    const int ACCOMMODATION = 500;

    float foodExpenses;
    float leisureExpenses;
    float clothesExpenses;
    float travelExpenses;
    float totalSpent;

    printf("Enter food expenses: ");
    scanf("%f", &foodExpenses);

    printf("Enter leisure expenses: ");
    scanf("%f", &leisureExpenses);

    printf("Enter clothes expenses: ");
    scanf("%f", &clothesExpenses);

    printf("Enter travel expenses: ");
    scanf("%f", &travelExpenses);

    totalSpent = foodExpenses + leisureExpenses + clothesExpenses + ACCOMMODATION + travelExpenses;

    printf("\nTotal expenditure = Rs %.2f\n", totalSpent);

    return 0;
}