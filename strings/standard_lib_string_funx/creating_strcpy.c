#include<stdio.h>
void xstrcpy(char *, char *);
int main(){
    char source[] = "Sayonara";
    char target[20] ;
    xstrcpy(target, source);
    printf("Source string = %s\n", source);
    printf("Target string = %s\n", target);
}

void xstrcpy(char *t, char*s){
    while(*s != '\0'){
        *t = *s;
        s++;
        t++;
    }
    *t = '\0';
}