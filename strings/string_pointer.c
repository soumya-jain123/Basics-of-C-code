#include<stdio.h>
int main(){
    char name[] = "klinsman";
    char *ptr;
    ptr = name;// stroing the base address of name 

    while(*ptr != '\0'){
        printf("%c ",*ptr);
        ptr++;
    }
    printf("\n");

    return 0;
}