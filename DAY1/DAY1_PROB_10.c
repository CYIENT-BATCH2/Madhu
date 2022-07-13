/*Find the heaviest

steps:
1.read 3 values
2.checking which is grater
3. if n1 is greater than both n2 and n3, n1 is the largest.
4.if n2 is greater than both n1 and n3, n2 is the largest.
5.if n3 is greater than both n1 and n2, n3 is the largest
6.prints which is grater.
*/

#include <stdio.h>

int main()
{
    int w1,w2,w3;
    printf("enter weight=");
    scanf("%d%d%d",&w1,&w2,&w3);
    printf("w1=%d w2=%d w3=%d\n",w1,w2,w3);
    if((w1>w2)&&(w1>w3))
    printf(" heaviest=%d\n",w1);
    else if((w2>w1)&&(w2>w3))
    printf(" heaviest=%d\n",w2);
    else
    printf(" heaviest=%d\n",w3);
    

    return 0;
}
