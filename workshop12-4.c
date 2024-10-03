#include <stdio.h>

// Skapa ett alias 'student' för struct student
typedef struct {
    int roll_no;
    char name[40];
} student;

int main() {
    int num_students;

    // Fråga användaren hur många studenter som ska matas in
    printf("Enter the number of students (max 100): ");
    scanf("%d", &num_students);

    // Kontrollera att antalet inte överstiger maxgränsen
    if (num_students > 100) {
        printf("Maximum number of students is 100. Exiting.\n");
        return 1;
    }

    // Skapa en array med plats för upp till 100 studenter
    student students[100];

    // Låt användaren mata in uppgifterna för varje student
    for (int i = 0; i < num_students; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Enter roll number: ");
        scanf("%d", &students[i].roll_no);
        printf("Enter name: ");
        scanf("%s", students[i].name);  // Tar emot namnet som en string
    }

    // Skriv ut uppgifterna för alla studenter
    printf("\nList of students:\n");
    for (int i = 0; i < num_students; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].roll_no);
        printf("Name: %s\n\n", students[i].name);
    }

    return 0;
}
