#include <stdio.h>
#include <string.h>

// 1. Defining the Structure
struct Employee {
    char name[50];
    char designation[50];
    char gender; // 'M' or 'F'
    char doj[15]; // Format: dd/mm/yyyy
    float salary;
};

// 2. Functions to perform the required tasks

// a) Total number of employees (Returns the count provided to it)
int totalEmployees(int n) {
    return n;
}

// b) Count of male and female employees
void countGender(struct Employee emp[], int n) {
    int male = 0, female = 0;
    for (int i = 0; i < n; i++) {
        if (emp[i].gender == 'M' || emp[i].gender == 'm') male++;
        else if (emp[i].gender == 'F' || emp[i].gender == 'f') female++;
    }
    printf("Males: %d, Females: %d\n", male, female);
}

// c) Employees with salary > 10,000
void countHighSalary(struct Employee emp[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (emp[i].salary > 10000) count++;
    }
    printf("Employees with salary > 10,000: %d\n", count);
}

// d) Employees with designation "Asst Manager"
void countAsstManagers(struct Employee emp[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        // strcmp returns 0 if strings match
        if (strcmp(emp[i].designation, "Asst Manager") == 0) count++;
    }
    printf("Number of Asst Managers: %d\n", count);
}

int main() {
    // Example data
    struct Employee org[3] = {
        {"Aditya", "Asst Manager", 'M', "12/01/2025", 15000},
        {"Sanskar", "Developer", 'M', "15/02/2025", 9000},
        {"Anurag", "Asst Manager", 'F', "20/03/2025", 12000}
    };

    int n = 3;

    printf("--- Organization Report ---\n");
    printf("Total Employees: %d\n", totalEmployees(n));
    countGender(org, n);
    countHighSalary(org, n);
    countAsstManagers(org, n);

    return 0;
}