#include <stdio.h>
int main()
{
    int number, newNum =0 ;
    int remainder, multiplier =1;

    printf("Enter the number : ");
    scanf("%d", &number);

    int Num = number;
    while(number>0)
    {
        remainder = (number%10) + 1;
        newNum = newNum + remainder*multiplier;
        number /= 10;
        multiplier *= 10;
    }

    printf("the old number %d is now : %d\n", Num, newNum);

    return 0;
}