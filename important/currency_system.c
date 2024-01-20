#include <stdio.h> 
int main()
{
    int amount, notes =0;

    printf("Enter the amount in Rs.: ");
    scanf("%d",&amount);

    int cash = amount ;

    if(amount >= 100)
    {
        notes += amount/100;
        amount %= 100;
    }
    if(amount >= 50)
    {
        notes += amount/50;
        amount %= 50;
    }
    if(amount >= 10)
    {
        notes += amount/10;
        amount %= 10;
    }
    if(amount >=5)
    {
        notes += amount/5;
        amount %= 5;
    }
    if(amount >=2)
    {
        notes += amount/2;
        amount %= 2;
    }
    if(amount>=1)
    {
        notes += amount;
    }   
    printf("the smallest number of notes to make Rs. %d is: %d\n", cash, notes);
    return 0;
}