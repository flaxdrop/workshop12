#include <stdio.h>

struct student {
    int roll_no;
    char name[40];
};

int main() {
    // Skapa en student med roll_no 123 och namn "Kim"
    struct student s1 = {123, "Kim"};

    // Skriv ut värdena från structen
    printf("Roll Number: %d\n", s1.roll_no);
    printf("Name: %s\n", s1.name);

    return 0;
}
