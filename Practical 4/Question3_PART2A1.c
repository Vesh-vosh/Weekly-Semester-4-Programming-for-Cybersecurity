#include <stdio.h>

int main() {
    double salary1, salary2;

    printf("Enter two salaries separated by a space:\n");

    if (scanf("%lf %lf", &salary1, &salary2) != 2) {
        printf("Error: Invalid input.\n");

        while (getchar() != '\n');

        return 1;
    }

    printf("Input accepted successfully.\n");
    printf("Salary 1: %.2lf\n", salary1);
    printf("Salary 2: %.2lf\n", salary2);

    return 0;
}