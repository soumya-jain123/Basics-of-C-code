// calculation of simple interest for 3 sets of p, n and r
#include <stdio.h>
int main()
{
    int p, n, count;
    float r,si ;

    count =1;
    while (count <= 3)
    {
        printf("\n Enter the values of p, n and r ");
        scanf("%d %d %f", &p, &n, &r );
        si = p*n*r/100 ;
        printf("Simple Interest = Rs. %f",si);
        count += 1;
    }
    return 0;
}
