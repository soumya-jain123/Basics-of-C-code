/* WAP to calculate overtime pay of 10 employees Overtime is paid at the rate of Rs. 12.00 per hour for every hour worked above 40 hours. */
#include <stdio.h>
int main()
{
    int hoursWorked ;
    const int standardHours = 40;
    const float overtimeRate = 12.00 ;

    float overtimePay;

    for(int i = 1;i<=10;i++)
    {
        printf("Enter the total number of hours worked : ");
        scanf("%d",&hoursWorked);
        if(hoursWorked > standardHours)
        {
            int overtimeHours = hoursWorked - standardHours ;
            overtimePay = overtimeHours*overtimeRate;
            printf("Overtime pay for employee %d is %f\n", i, overtimePay);
        } else 
        {
            printf("No overtime pay for employee %d", i);
        }
    }
    return 0;
}