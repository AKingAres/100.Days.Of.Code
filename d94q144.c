//Write a function that accepts a structure as parameter and prints its members.

#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};
void printStudent(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}
int main() {
    struct Student s = {"Aarav", 10, 89.5};
    printf("Printing student using function:\n");
    printStudent(s);
    return 0;
}
