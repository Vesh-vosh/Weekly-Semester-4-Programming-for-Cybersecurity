#include <stdio.h>

#define MAX 100

// Structure for student
struct Student {
    char name[50];
    int marks[3];
    float average;
};

// Function to calculate average
void calculateAverage(struct Student *s) {
    int sum = 0;
    for(int i = 0; i < 3; i++) {
        sum += s->marks[i];
    }
    s->average = sum / 3.0;
}

// Function to find topper
int findTopper(struct Student s[], int n) {
    int topIndex = 0;
    for(int i = 1; i < n; i++) {
        if(s[i].average > s[topIndex].average) {
            topIndex = i;
        }
    }
    return topIndex;
}

int main() {
    struct Student s[MAX];
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input
    for(int i = 0; i < n; i++) {
        printf("\nStudent %d name: ", i + 1);
        scanf("%s", s[i].name);

        printf("Enter 3 marks: ");
        for(int j = 0; j < 3; j++) {
            scanf("%d", &s[i].marks[j]);
        }

        calculateAverage(&s[i]);
    }

    // Display all students
    printf("\n--- Student Records ---\n");
    for(int i = 0; i < n; i++) {
        printf("%s - Avg: %.2f\n", s[i].name, s[i].average);
    }

    // Find topper
    int top = findTopper(s, n);
    printf("\nTopper: %s with %.2f average\n", s[top].name, s[top].average);

    printf("\nPress Enter to exit...");
    getchar();
    getchar();


    return 0;
}