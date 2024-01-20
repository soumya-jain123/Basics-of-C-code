#include <stdio.h>
int main()
{
    float Dis_km ;
    float Dis_m , Dis_feet, Dis_inc, Dis_cm ;

    printf("Enter the distance between two cities \n");
    scanf("%f",&Dis_km);

    Dis_m = Dis_km * 1000 ;
    Dis_feet = Dis_km * 3280.84 ;
    Dis_inc = Dis_km * 39370.1 ;
    Dis_cm = Dis_km * 100000 ;

    printf("Distance(m) is = %f\n", Dis_m);
    printf("Distance(feet) is = %f\n", Dis_feet);
    printf("Distance(inch) is = %f\n", Dis_inc);
    printf("Distance(cm) is = %f\n", Dis_cm);
    return 0;
}