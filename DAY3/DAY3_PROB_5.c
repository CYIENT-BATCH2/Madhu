//Right shift the value 0xFE by 3 bits

#include<stdio.h>

int main()
{
long int n=0xFE,pos=7;
L:if(pos>=0)
{
  printf("%ld ",n>>pos&1);
pos--;
goto L;

}

printf("right shift value %ld",n>>3);


}
