/*sum of the first and the second last digit of a 5-digit 
steps:
1.read n
2.checking each last 2nd digit no..and first digit
3.sum both
*/

#include<stdio.h>
int main()
{
int num,rem,cnt=0,sum=0;
printf("enter no.\n");
scanf("%d",&num);
  if(num>11111&&num<99999) 
  {
l:
if(num!=0)
{
rem=num%10;
cnt++;
if(cnt==2||cnt==5)

sum=sum+rem;
num/=10;

goto l;
}
printf("%d",sum);
  }
  else
    printf("out of range");
}
