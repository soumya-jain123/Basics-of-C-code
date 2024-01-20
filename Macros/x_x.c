#include<stdio.h>
int main(){
    int i=3;
    int a = i++;
    int b = ++i;
    printf("i++ : %d\n",a);
    printf("++i : %d",b);
    return 0;
}