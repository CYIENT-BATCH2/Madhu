//reverse a 3-digit number

#include <stdio.h>

int main()
{
    int n,s=0,d;
    
    printf("enter char.\n");
    scanf("%d",&n);
   if(n>111&&n<999) 
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
   else
   printf("out of range\n");
}
