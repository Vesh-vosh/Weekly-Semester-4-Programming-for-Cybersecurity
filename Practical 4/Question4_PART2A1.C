#include <stdio.h>
#include <stdbool.h>

bool readSalaries(double *salary1, double *salary2);

int main() {
    double salary1, salary2;

    if (!readSalaries(&salary1, &salary2)) {
        printf("Error: Failed to read salaries.\n");
        return 1;
    }

    printf("Salary 1: %.2lf\n", salary1);
    printf("Salary 2: %.2lf\n", salary2);

    return 0;
}

bool readSalaries(double *salary1, double *salary2) {

    if (salary1 == NULL || salary2 == NULL) {
        return false;
    }

    printf("Enter two salaries:\n");

    if (scanf("%lf %lf", salary1, salary2) != 2) {
        printf("Error: Invalid input.\n");

        while (getchar() != '\n');

        return false;
    }

    return true;
}