/*.A message is encoded in the form of numbers and sent to you. Write a program to decode the message. (HINT: A=1, B=2, … so on) 

1.read n
2.convert int to alphabet by adding 64 to it 
3.checking each 2digit no.. at a time 
4.reverse the data and print alphabets
*/

#include <stdio.h>

int main() {
   long int n,d,sum=0;
    scanf("%d",&n);

    while(n!=0)
    {
        d=n%100;
//printf("%c",d+64);
        sum=sum*100+d;
        n/=100;
    }
    n=sum;
    while(n!=0)
    {
        d=n%100;
printf("%c",d+64);
        sum=sum*100+d;
        n/=100;
    }
}
