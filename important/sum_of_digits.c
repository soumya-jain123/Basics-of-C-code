#include <stdio.h>
int main()
{
    int number;
    int sum =0;

    printf("Enter a five digit number \n");
    scanf("%d", &number);

    int remainder;
    while(number > 0)
    {
        remainder = number % 10 ; // getting each digit
        sum += remainder ; // doing their sum
        number = number / 10 ; // to change the number after retreving the digits
    }

    printf("Sum of digits of %d is = %d\n", number, sum);
    return 0;
}