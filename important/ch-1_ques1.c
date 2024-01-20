#include <stdio.h>
int main()
{
    // enter the basic salary for ramesh
    float Basic_sal ;
    float D_A , H_rent;
    float Gross_sal;
    printf("Enter Ramesh's Basic Salary \n");
    scanf("%f",&Basic_sal);

    D_A = 0.4 * Basic_sal;
    H_rent = 0.2 * Basic_sal;

    Gross_sal = Basic_sal + D_A + H_rent;

    printf("Ramesh's Gross salary is = %f",Gross_sal);

    return 0;
}