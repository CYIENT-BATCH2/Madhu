/*10-digit number is palindrome or not

steps:
1.read no..
2.reversing data
3.comparing reverse data and given data
*/

#include <stdio.h>

int main()
{
 long int n,r=0,s=0,p=0;
scanf("%ld",&n);
if(n>=1000000000&&n<=9999999999){
p=n;
l:
if(n){r=n%10;s=s*10+r;n=n/10;goto l;}
if(p==s){printf("palindrome");}else{printf("not a palindrome");}
}
else{printf("not in a range");}
    return 0;
}
