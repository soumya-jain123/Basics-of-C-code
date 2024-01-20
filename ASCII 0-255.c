/* WAP to print all the ASCII valuee from 0 to 255 */

#include <stdio.h>
int main()
{
    int a=0;

    while (a<=255)
    {
        printf("ASCII value for %d = %c\n", a, a);
        a++ ;
    }
    return 0;
}