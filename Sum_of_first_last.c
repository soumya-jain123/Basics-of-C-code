#include <stdio.h>
int main()
{
    int number, firstDigit, lastDigit;

    printf("Enter the number\n");
    scanf("%d",&number);

    lastDigit = number%10 ;
    int Num = number;
    while(number >= 10)
    {
        number /= 10;
    }
    firstDigit = number;

    int sum = firstDigit + lastDigit ;

    printf("Sum of first and last digit of the number %d is = %d\n", Num, sum);

    return 0;
}