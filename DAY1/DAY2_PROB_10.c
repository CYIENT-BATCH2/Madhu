//Find the heaviest


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
