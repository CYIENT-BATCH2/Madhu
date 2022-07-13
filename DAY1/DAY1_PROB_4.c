/*reverse the 6 digit number

steps:
1.read n
2.check whether it is 6 digit or not
3.extrating each digit from no... and check if it contain 0 in those digits
4.if not reverse that no .. by reverse logic
5.print if non zero digit involved in given no...
*/

#include <stdio.h>

int main()
{
    int n,s=0,d;
    
    printf("enter char.\n");
    scanf("%d",&n);
   if(n>111111&&n<999999) 
   {
       L:if(n>0)
       {
           d=n%10;
           if(d!=0)
           s=s*10+d;
           n=n/10;
           goto L;
       }
       printf("reverse=%d\n",s);
   }
  
  
  
    return 0;
}
