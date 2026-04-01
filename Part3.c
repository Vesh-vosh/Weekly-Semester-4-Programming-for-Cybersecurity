#include<stdio.h>

int main() {

    float foodExpenses, leisureExpenses, clothesExpenses, travelExpenses, totalSpent;
    const int ACCOMMODATION = 500;

    printf("Enter food expenses: ");
    scanf("%f", &foodExpenses);

    printf("Enter leisure expenses: ");
    scanf("%f", &leisureExpenses);

    printf("Enter clothes expenses: ");
    scanf("%f", &clothesExpenses);

    printf("Enter travel expenses: ");
    scanf("%f", &travelExpenses);

    // Input validation has been added to prevent negative values
    // This ensures expenses cannot be less than 0, making input more reliable
    if (foodExpenses < 0 || leisureExpenses < 0 || clothesExpenses < 0 || travelExpenses < 0) {
        printf("Invalid is Invalid: Negative not allowed\n");
        return 1;
    }

    totalSpent = foodExpenses + leisureExpenses + clothesExpenses + travelExpenses + ACCOMMODATION;

    printf("Total expenditure = Rs %.2f\n", totalSpent);

    return 0;
}