#include <stdio.h>

int main() {

    int departments;
    int employees;
    int days;
    int salary;
    int departmentTotal;
    int overallTotal = 0;

    printf("Enter number of departments: ");
    scanf("%d", &departments);

    for (int i = 1; i <= departments; i++) {

        printf("\nEnter number of employees in Department %d: ", i);
        scanf("%d", &employees);

        departmentTotal = 0;

        for (int j = 1; j <= employees; j++) {

            printf("Enter days worked by Employee %d: ", j);
            scanf("%d", &days);

            salary = days * 500;

            if (days > 25) {
                salary = salary + 2000;
            }

            printf("Department %d, Employee %d: Days Worked = %d, Salary = Rs. %d\n",
                   i, j, days, salary);

            departmentTotal = departmentTotal + salary;
            overallTotal = overallTotal + salary;
        }

        printf("\nTotal salary paid in Department %d: Rs. %d\n",
               i, departmentTotal);
    }

    printf("\nTotal salary paid across all departments: Rs. %d\n",
           overallTotal);

    return 0;
}