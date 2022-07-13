/*Convert decimal number 204 to hex value, binary value
steps:
1.read n
2.use %x for hex
3.bit by bit check and print
*/

#include<stdio.h>

int main()
{
long int num=204,pos=7;
printf("hex value =%lX\n",num);
L:if(pos>=0)
{
  printf("%ld",num>>pos&1);
pos--;
goto L;
}
return 0;
}
