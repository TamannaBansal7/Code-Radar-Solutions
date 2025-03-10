#include <stdio.h>
#include <stdlib.h>

// Define the structure for a student
struct Student {
    int rollNumber;
    char name[50]; // Assuming a maximum name length of 50 characters
    float marks;
};

int main() {
    int n, i;

    // Get the number of students from the user
    scanf("%d", &n);

    // Dynamically allocate memory for the student array
    struct Student* students = (struct Student*)malloc(n * sizeof(struct Student));

    // Input student details
    for (i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
    }

    // Display student details
    for (i = 0; i < n; i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n", students[i].rollNumber, students[i].name, students[i].marks);
    }

    // Free the dynamically allocated memory
    free(students);

    return 0;
}