//Use pointer to struct to modify and display data using -> operator.

#include <stdio.h>
#include <string.h>
struct Person {
    char name[50];
    int age;
};
int main() {
    struct Person p={"Atharva", 20};
    struct Person*ptr=&p;
    ptr->age = 25;
    strcpy(ptr->name, "UpdatedName");
    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);
}