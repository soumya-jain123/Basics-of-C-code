#include<stdio.h>
#include<string.h>

int main(){
    char arr[] = "Bamboozled";
    int len1, len2;

    len1 = strlen(arr);
    len2 = strlen("Humpty Dumpty");
    printf("String = %s length = %d\n",arr,len1);
    printf("String = %s lemgth = %d\n","Humpty Dumpty",len2);

    return 0;
}