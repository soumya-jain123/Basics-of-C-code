/* WAP to print that the input number is armstrong or not */

#include <stdio.h>

int countDigits(int number){
    int count =0 ;
    while(number != 0){
        number /= 10;
        count++;
    }
    return count;
}
int power(int base, int exponent){
    int result = 1;

    while(exponent >0){
        result *= base;
        exponent--;
    }

    return result;
}
int isArmstrong(int number)
{
    int originalNum, remainder, n, result=0;

    originalNum = number;

    n = countDigits(number);

    while(originalNum != 0)
    {
        remainder = originalNum % 10;
        result += power(remainder, n);
        originalNum /= 10;
    }
    return (result == number);
}

int main()
{
    int number ;

    printf("Enter the number to be checked: ");
    scanf("%d", &number);

    if (isArmstrong(number))
    {
        printf("%d is an armstrong number!\n",number);
    }else {
        printf("%d is not an armstrong number!\n",number);
    }

    return 0;
}