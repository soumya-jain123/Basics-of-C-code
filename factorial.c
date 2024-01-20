/* WAP to find the factorial of any number enetered from keyboard */
#include <stdio.h>
int main()
{
    int number;
    long long factorial =1;

    printf("Enter a number : ");
    scanf("%d",&number);

    if(number<0)
    printf("Factorial is not defined for nrgative values! .");
    else
    {
        for(int i = 1;i<=number;++i)
        {
            factorial *= i;
        }

        printf("Factorial of %d is %lld\n", number, factorial);
    }

    return 0;
}