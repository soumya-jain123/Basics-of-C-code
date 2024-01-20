#include<stdio.h>
struct EmployeeDbs{
    char name[20];
    int emp_id;
    float salary;
};
void inputEmployee(struct EmployeeDbs *data){
    printf("Enter employee name: ");
    scanf("%s",data -> name);

    printf("Enter employee ID: ");
    scanf("%d",&data -> emp_id);

    printf("Enter employee salary: ");
    scanf("%f",&data -> salary);
}

void displayEmployee(struct EmployeeDbs *emp){
    printf("\nEmployee Details\n");
    printf("Name: %s\n", emp->name);
    printf("Employee ID: %d\n", emp->emp_id);
    printf("Salary: %f\n", emp->salary);
    
}

void highestSalary(struct EmployeeDbs emp[], int numEmp){
    float maxSalary = emp[0].salary;
    int index =0;

    for(int i=1;i<numEmp;++i){
        if(emp[i].salary > maxSalary){
            maxSalary = emp[i].salary;
            index = i;
        }
    }

    printf("\nEmployee with the highest :\n");
    displayEmployee(&emp[index]);
}
int main(){
    struct EmployeeDbs employees[5];
    for(int i=0;i<5;++i){
        printf("\nEnter detalis for employee #%d:\n",i+1);
        inputEmployee(&employees[i]);
    }

    for(int i=0;i<5;++i){
        displayEmployee(&employees[i]);
    }

    highestSalary(employees, 5);

    return 0;
}