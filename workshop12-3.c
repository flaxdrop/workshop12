#include <stdio.h>

// Skapa ett alias 'student' för struct student
typedef struct {
    int roll_no;
    char name[40];
} student;

int main() {
    // Initiera en array med tre studenter
    student students[3] = {
        {123, "Kim"},
        {213, "Abdul"},
        {321, "Charles"}
    };

    // Skriv ut uppgifterna för varje student
    for (int i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].roll_no);
        printf("Name: %s\n\n", students[i].name);
    }

    return 0;
}
