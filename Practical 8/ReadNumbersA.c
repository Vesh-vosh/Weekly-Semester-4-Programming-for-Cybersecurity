/* ReadNumbersA.c
   Practical 8, Part 1 (a)
   Basic file reading with error checking
   @Sarvesh Sharma */

#include <stdio.h>

int main() {
    // Open file for reading
    FILE *fp = fopen("numbers.txt", "r");
    
    // Check if file opened successfully
    if (fp == NULL) {
        printf("Error: Cannot open file 'numbers.txt'\n");
        printf("Make sure the file exists in the same directory.\n");
        return 1;
    }
    
    printf("Reading numbers from file:\n");
    printf("==========================\n");
    
    int num;
    int count = 0;
    int sum = 0;
    
    // Read integers until end of file
    while (fscanf(fp, "%d", &num) == 1) {
        printf("Number %d: %d\n", count + 1, num);
        sum += num;
        count++;
    }
    
    // Close the file
    fclose(fp);
    
    printf("==========================\n");
    printf("Total numbers read: %d\n", count);
    printf("Sum: %d\n", sum);
    
    if (count > 0) {
        printf("Average: %.2f\n", (float)sum / count);
    }
    
    return 0;
}
