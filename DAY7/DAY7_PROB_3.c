/*3.Write program to clear(0) bits CIS, CM2, CM1, CM0 in register “CMCON” if bits CHS3, CHS2, CHS1, CHS0 bits are set to 0x07 in register “ADCON0”
steps:
1]Initialize the variables
2]take the input from the user
3]write the condition for clearing the bits
4]print the output

*/


#include<stdio.h>

int main()

{
    
int ADCON0,CMCON;
printf("enter value");
scanf("%d%d",&ADCON0,&CMCON);

for(int pos=7;pos>=0;pos--){
    printf("%d",(ADCON0>>pos)&1);
}
printf("\n");

for(int pos=7;pos>=0;pos--){
    printf("%d",(CMCON>>pos)&1);
} 
printf("\n");



if((ADCON0&28)==28)
{
  for(int pos=4;pos>=0;pos--)
  {
      CMCON=CMCON&(~(1<<pos));
  }
  for(int pos=7;pos>=0;pos--){
    printf("%d",(CMCON>>pos)&1);
}


}



return 0;
}
