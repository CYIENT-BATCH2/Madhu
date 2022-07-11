//2-digit ID to binary form

#include <stdio.h>

int main()
{
    int d,n,pos=7;
  printf("enter ID\n");
  scanf("%d",&d);
  
  if(d>=10&&d<100)
  {
  L:if(pos>=0)
{
  printf("%d",d>>pos&1);
pos--;
goto L;
}
}
else
printf("invalid ID");

    return 0;
}
