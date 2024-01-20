#include <stdio.h>
int main()
{
    int number, reversedNum = 0;
    
    printf("Enter the number : ");
    scanf("%d",&number);

    int Num = number;

    while(number > 0)
    {
        int remainder = number % 10;
        reversedNum = reversedNum*10 + remainder ;
        number /= 10;
    }

    printf("Reversed number is : %d\n",reversedNum);

    if (Num == reversedNum)
        printf("Both number are same!\n");
    else
        printf("Both number are not same!\n");
    
    return 0;
}