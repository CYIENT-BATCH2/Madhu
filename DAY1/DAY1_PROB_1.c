//multiple of 11 or if it is one more than a multiple of 11.

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
