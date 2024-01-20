#include<stdio.h>

void Swap(int a, int b){
    a = a + b;
    b = a - b;
    a = a - b;

    printf("a = %d b =%d",a,b);
}
int main(){
    int a,b;

    printf("Enter the values for a and b : ");
    scanf("%d %d",&a,&b);

    Swap(a,b);

    return 0;
}