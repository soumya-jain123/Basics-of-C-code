#include <stdio.h>
int main()
{
    int Num, reversedNum =0 ;

    printf("enter the number \n");
    scanf("%d",&Num);

    int number = Num ;
    while(number != 0)
    {
        int remainder = number % 10;
        reversedNum = reversedNum*10 + remainder ;
        number /= 10;
    }

    printf("The revesed number of the number %d is = %d\n", Num, reversedNum);
    return 0;
}