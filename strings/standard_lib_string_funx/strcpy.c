#include<stdio.h>
#include<string.h>

int main(){
    char source[] = "Sayonara";
    char target[20];
    strcpy(target,source);
    printf("Source string = %s\n", source);
    printf("Target string = %s\n", target);

    return 0;
}