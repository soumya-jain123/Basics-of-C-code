#include<stdio.h>
void foo(int []);
int main(){
    int arr[4]={1,2,3,4};
    foo(arr);
    printf(" %d", arr[0]);
    return 0;
}
void foo(int p[]){
    int i = 10;
    p = &i;
    printf(" %d", p[0]);
}