#include<stdio.h>
int main(){
    char name[25];
    printf("Enter your name : ");
    scanf ("%[^\n]s",&name);
    printf("%s",name);
    return 0;
}