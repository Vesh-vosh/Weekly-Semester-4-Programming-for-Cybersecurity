#include<stdio.h>

int main() {
    float foodExpenses = 230.0;
float leisureExpenses = 70.0;
float clothesExpenses = 60.0;
float accommodationExpenses = 500.0;
float travelExpenses = 60.0;

float totalSpent;

totalSpent = foodExpenses + leisureExpenses + clothesExpenses + accommodationExpenses + travelExpenses;


printf("The total expenditure this month was %.2f\n\n", totalSpent);

    return 0;
}