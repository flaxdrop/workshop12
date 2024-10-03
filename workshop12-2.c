#include <stdio.h>

// Skapa ett alias 'student' för struct student
typedef struct {
    int roll_no;
    char name[40];
} student;

int main() {
    student s1, s2;

    // Ta emot uppgifter för student 1
    printf("Enter roll number for student 1: ");
    scanf("%d", &s1.roll_no);
    printf("Enter name for student 1: ");
    scanf("%s", s1.name);  // Tar emot namnet som en string

    // Ta emot uppgifter för student 2
    printf("Enter roll number for student 2: ");
    scanf("%d", &s2.roll_no);
    printf("Enter name for student 2: ");
    scanf("%s", s2.name);  // Tar emot namnet som en string

    // Skriv ut uppgifterna för student 1
    printf("\nStudent 1:\n");
    printf("Roll Number: %d\n", s1.roll_no);
    printf("Name: %s\n", s1.name);

    // Skriv ut uppgifterna för student 2
    printf("\nStudent 2:\n");
    printf("Roll Number: %d\n", s2.roll_no);
    printf("Name: %s\n", s2.name);

    return 0;
}
