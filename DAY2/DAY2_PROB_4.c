/*
Kishore bought ‘n’ number of lottery tickets. His lucky number is 3 so he wants to separate all the tickets that have the number 3 in them. Find how many such lucky tickets are found in the ‘n’ number of tickets purchased by Kishore.

*/

#include <stdio.h>
int main()
{
int n1,n2,r=0,k=0,s,t=0,cnt=0;
scanf("%d",&n1);
l:
if(n1>0)
{;
scanf("%d",&k);
s=k;
n1--;
whl:
if(s!=0)
{
    r=s%10;
    if(r==3){cnt++;
    // printf(" lucky no =%d\n ",k);  
        goto out;
    }s/=10; 
    goto whl;
}
out:
goto l;
 
}
printf(" lucky count  =%d\n ",cnt);  
}
