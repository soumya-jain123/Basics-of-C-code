#include<stdio.h>

int factorial(int x){
    int fact =1;
    for(int i=2;i<=x;i++){
        fact *= i;
    }

    return fact;
}

int combination(int n, int r){
    int ncr = factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
int main(){
    int n,r;
    printf("Enter n : ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            int ncr = combination(i,j);
            printf("%d ",ncr);
        }
        printf("\n");
    }
    return 0;
}