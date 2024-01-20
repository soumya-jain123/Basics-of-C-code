/* WAP to find the value of one number raised to power of another */
#include <stdio.h>

long long power(int base, int exponent)
{
    long long result =1;

    for(int i=0;i<exponent;++i)
    {
        result *= base ;
    }

    return result ;
}
int main()
{
    int num1, num2;

    printf("Enter value of number 1 : ");
    scanf("%d", &num1);

    printf("Enter value of number 2 : ");
    scanf("%d", &num2);

    long long result = power(num1, num2);

    printf("%d raised to the power of %d is %lld\n", num1, num2, result);

    return 0;
}