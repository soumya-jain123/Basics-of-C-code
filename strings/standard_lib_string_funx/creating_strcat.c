#include<stdio.h>
void xstrcat(char *, char *);
int main(){
    char source[] = " Folks!";
    char target[20] = "Hello";

    xstrcat(target, source);
    printf("source string = %s\n",source);
    printf("Target string = %s\n",target);
}

void xstrcat(char *dest, char *src){
    while(*dest != '\0'){
        dest++;
    }

    while(*src != '\0'){
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';
}