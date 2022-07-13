/*accept hex value as i/p and right shift bit value also as i/p
steps:
1.read n
2.use %x for hex
3. print after n shifts
*/
#include<stdio.h>

int main()
{
long int n,pos=7,shift;
printf("enter hex no.=");
scanf("%lx",&n);
printf("enter no. of shifts=");
scanf("%ld",&shift);
L:if(pos>=0)
{
  printf("%ld ",n>>pos&1);
pos--;
goto L;

}

printf("right shift value %ld",n>>shift);


}
