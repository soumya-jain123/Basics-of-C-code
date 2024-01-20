#include<stdio.h>
int main(){
    int arr[5] ;
    for (int i=0; i<=4; i++)
        scanf("%d",&arr[i]);
    
    for (int j=0;j<=4;j++)
        printf("%d ",arr[j]);
}