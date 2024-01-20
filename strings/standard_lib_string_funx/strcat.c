#include<stdio.h>
#include<string.h>
int main(){
    char source[] = " Folks!";
    char target[20] = "Hello";
    strcat(target,source);
    printf("source string = %s\n",source);
    printf("Target string = %s\n",target);

    return 0;
}