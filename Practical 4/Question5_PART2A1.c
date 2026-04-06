#include <stdio.h>
#include <stdbool.h>

#define MIN_SALARY 0.0
#define MAX_SALARY 1000000.0

// Function declaration
bool validateSalary(double salary);

int main() {
    double salary;

    printf("Enter salary:\n");
    scanf("%lf", &salary);

    if (validateSalary(salary)) {
        printf("Salary is valid: %.2lf\n", salary);
    } else {
        printf("Error: Salary out of range.\n");
    }

    return 0;
}

// Function definition
bool validateSalary(double salary) {

    if (salary >= MIN_SALARY && salary <= MAX_SALARY) {
        return true;
    }

    return false;
}