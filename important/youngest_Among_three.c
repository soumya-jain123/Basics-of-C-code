// to check among ram, shyam and ajay who is younger
#include <stdio.h>
int main()
{
    int age_ram, age_shyam, age_ajay ;

    printf("Enter the age for Ram, Shyam and Ajay : ");
    scanf("%d %d %d", &age_ram, &age_shyam, &age_ajay);

    if((age_ram<age_shyam) && (age_ram<age_ajay))
    {
        printf("Ram is younger !");
    }if((age_shyam<age_ram) && (age_shyam<age_ajay))
    {
        printf("Shyam is younger!");
    }if((age_ajay<age_ram) && (age_ajay<age_shyam))
    {
        printf("Ajay is younger!");
    }else 
    {
        printf("All are of same age or invalid input !");
    }
    return 0;
}