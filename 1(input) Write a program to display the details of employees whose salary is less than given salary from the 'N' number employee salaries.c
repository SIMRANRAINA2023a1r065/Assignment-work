//title of program
//progam to display the details of employees whose salary is less than given salary from the 'N' number employee salaries
//header file
#include <stdio.h>
//struct declaration
struct Employee {
    int empId;
    char name[50];
    float salary;
};
void displayEmployees(struct Employee employees[], int n, float givenSalary)
{
	int i;
    //output statement
    printf("Employees with salary less than %.2f:\n", givenSalary);
    //for loop statement
    for (i = 0; i < n; ++i) {
        //if statement
        if (employees[i].salary < givenSalary)
		{
        //output statement
            printf("%d %s %.2f\n", employees[i].empId, employees[i].name, employees[i].salary);
        }
    }
}
//main function heading
int main() {
    int n = 5;
    float givenSalary = 70.0;
    struct Employee employees[] = {
        //details of employees
        {1234, "saksham", 67.67},
        {1345, "Kajal", 87.87},
        {69, "sakshi", 123.45},
        {70, "Sham", 55},
        {99,"ayush",65.24}

    };
    displayEmployees(employees, n, givenSalary);
    //return statement
    return 0;
}