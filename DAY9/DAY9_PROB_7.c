/*7.I). Set the register SSPSTAT value such a way that bit CKE, P and S bit are cleared (0), without disturbing the other bits.

II). Find out the value of UA, BF, SMP bits in SSPSTAT register if the value of the register is 0x55

steps:
1. tAKE THE INPUT FOR THE SSPSTAT regi.
2. check that number is equal to that bit, if same then that bit already set.
3. IF not then do the OR operation for that bit CKE, P and S bit
4. But first check that if that number is equal to 0x55 regi,
5. If equal then doing the ADDING operation with UA, BF, SMP bit.
6. print the value
*/

#include <stdio.h>

int main()
{
   int num,num1,num2;
   printf("Enter the number for SSPSTAT\n");// input for the SSPSTAT
   scanf("%d",&num);
   printf("Binery for SSPSTAT register\n");// Binary for SSPSTAT
   
   for(int bit=7;bit>=0;bit--)
   {
       printf("%d",((num>>bit)&1));
   }
   printf("\n");
   if((num & 88)==88) //Check the number is equal to that bit
   {
        printf("CKE, P and S bit already set\n");
   }
   num1=(num&(~88)); // if that bit is not set then OR operation for the set bit
   printf("After setting the CKE, P and S bit\n");
   for(int bit=7;bit>=0;bit--)
   {
       printf("%d",((num1>>bit)&1));
   }
   printf("\n");
   
   printf("UA, BF, SMP bits in SSPSTAT register\n");
   if(num==85) // Check the register value is not 0x55
   {
       num2=num&131; //Doing adding operation with that number 
       printf("value of Register=%d",num2);
   }
  return 0;
}
