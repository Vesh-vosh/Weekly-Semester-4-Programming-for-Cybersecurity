/* CalculateMortgageB.c  
Practical 4, Part 1 (b) 
@author Your Name */

#include <stdio.h>

// Function declarations
double largerSalary(double salary1, double salary2);
double smallerSalary(double salary1, double salary2);

int main() {
    // Declare variables
    double salary1, salary2, mortgage;

    // Input salaries
    printf("Enter two salaries separated by a space:\n");
    scanf("%lf %lf", &salary1, &salary2);

    // Calculate mortgage using functions
    mortgage = largerSalary(salary1, salary2) * 3;
    mortgage += smallerSalary(salary1, salary2);

    // Display result
    printf("The maximum size of mortgage is: £ %.2lf\n", mortgage);

    return 0;
}

// Function stubs
double largerSalary(double salary1, double salary2) {
    return 1;
}

double smallerSalary(double salary1, double salary2) {
    return 1;
}