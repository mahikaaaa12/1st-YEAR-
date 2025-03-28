// Define a structure for a student's academic record that includes a nested structure for personal details (name, age, address) and display the details of 5 students.
#include <stdio.h>

struct personalDetails {
    char name[20];
    int age;
    char address[50];
}; 

struct academicRecord {
    struct personalDetails personal;
    int rollNo;
    char dept[15];
    float marks;
};

int main(){
    struct academicRecord student[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter the name of the student: ");
        scanf(" %s", student[i].personal.name);
        printf("Enter the age of the student: ");
        scanf("%d", &student[i].personal.age);
        printf("Enter the address of the student: ");
        scanf(" %s", student[i].personal.address); 
        printf("Enter the roll number of the student: ");
        scanf("%d", &student[i].rollNo);
        printf("Enter the department of the student: ");
        scanf(" %s", student[i].dept); 
        printf("Enter the marks of the student: ");
        scanf("%f", &student[i].marks);
    }

    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", student[i].personal.name);
        printf("Age: %d\n", student[i].personal.age);
        printf("Address: %s\n", student[i].personal.address);
        printf("Roll number: %d\n", student[i].rollNo);
        printf("Department: %s\n", student[i].dept);
        printf("Marks: %.2f\n", student[i].marks);
    }

    return 0;
}

