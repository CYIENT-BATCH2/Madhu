/*multiple of 11 or if it is one more than a multiple of 11.

steps:
1.read data
2.substract one from given data --> (data-1)
3.modulus operation with 11 --> (data-1)%11
4.((n-1)%11)&&(n>0) data be +ve and divisible by 11 after substract
5.printing if condition true as special
*/

#include <stdio.h>

int main()
{
    int n;
    printf("enter no.\n");
    scanf("%d",&n);
    if(n%11==0||n%11==1)
    {
        printf("SPECIAL\n");
    }

    return 0;
}
