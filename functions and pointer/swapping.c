#include<stdio.h>
void swap(int x, int y){
    int temp;
    temp =x;
    x=y;
    y= temp;
    
printf("%d %d",x,y);
}
int main(){
    int a,b;

    printf("Enter the two numbers a and b : ");
    scanf("%d %d",&a,&b);

    swap(a,b);

    return 0;

}