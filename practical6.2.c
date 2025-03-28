//Define a structure for employee details (ID, name, salary) and use an array of structures to store and display details of 5 employees
#include <stdio.h>

struct Employee {
    int ID;
    char name[20];
    float salary;
};

int main(){
    struct Employee employee[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter the ID of the employee: ");
        scanf("%d", &employee[i].ID);
        printf("Enter the name of the employee: ");
        scanf(" %s", employee[i].name);
        printf("Enter the salary of the employee: ");
        scanf("%f", &employee[i].salary);
    }

    for (int i = 0; i < 5; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("ID: %d\n", employee[i].ID);
        printf("Name: %s\n", employee[i].name);
        printf("Salary: %.2f\n", employee[i].salary);
    }

    return 0;
}