//total number of handshakes made by the students

#include <stdio.h>

int main()
{
    int n;
    printf("enter no. of students\n");
    scanf("%d",&n);
    n=(n*(n-1))/2;
    printf("total no of meets=%d\n",n);
    return 0;
}
