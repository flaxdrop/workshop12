#include <stdio.h>

// Deklarera struct date
typedef struct {
    int dd, mm, yyyy;
} date;

// Deklarera struct emp
typedef struct {
    int no;
    char name[30];
    date join_date;
} emp;

int main() {
    emp employee;

    // Ta emot uppgifterna för den anställde
    printf("Enter employee number: ");
    scanf("%d", &employee.no);

    printf("Enter employee name: ");
    scanf("%s", employee.name);  // Tar emot namnet som en string

    printf("Enter joining date (DD MM YYYY): ");
    scanf("%d %d %d", &employee.join_date.dd, &employee.join_date.mm, &employee.join_date.yyyy);

    // Skriv ut uppgifterna från strukturen
    printf("\nEmployee Details:\n");
    printf("Employee Number: %d\n", employee.no);
    printf("Employee Name: %s\n", employee.name);
    printf("Joining Date: %02d/%02d/%04d\n", employee.join_date.dd, employee.join_date.mm, employee.join_date.yyyy);

    return 0;
}
