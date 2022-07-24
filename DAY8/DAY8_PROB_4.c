/*4.Realize a function which has 2 arguments and 1 return value. Argument 1 is Byte value, Argument 2 is bit position. Function has to flip the bit position (as per argument 2) in argument 1 byte value and return complete byte value.
steps:
1]Pass two arguments and 1 is return value, Ask the input from the user 
2]Argument 1 can be byte value and argument 2 can be bit position in the byte value 
3]From that bit position can be left shifted with 1 and which can be stored in temperory variable as mask
4]Then byte value xor with temperory variable mask that can store in binary value.
5]That stored byte value can be store in another variable as result.
*/
#include <stdio.h>
int toggle(int,int);
int main()

{
int n,pos,t;
printf("enter no.=");
scanf("%d",&n);
for(int i=7;i>=0;i--){
printf("%d",(n>>i)&1);
}
printf("\n");
printf("enter pos=");
scanf("%d",&pos);
t=toggle(n,pos);
for(int i=7;i>=0;i--){
printf("%d",(t>>i)&1);
}
return 0;
}
