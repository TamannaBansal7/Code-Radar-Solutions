// Your code here...#include <stdio.h>
#include <string.h>

struct Student {
    int rollNumber;
    char name[50];
    int marks;
}

int main() {
    int n;
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %s %d", &students[i].rollNumber, students[i].name, &students[i].marks);
    }

    int maxMarks = -1;
    int maxIndex = -1;

    for (int i = 0; i < n; i++) {
        if (students[i].marks > maxMarks) {
            maxMarks = students[i].marks;
            maxIndex = i;
        }
    }

    printf("%d %s %d\n", students[maxIndex].rollNumber, students[maxIndex].name, students[maxIndex].marks);

    return 0;
}