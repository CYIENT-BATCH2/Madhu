/*6.Set the register T0CON value such a way that bit TMR0ON and PSA bit are set (1), without disturbing the other bits.

II). Find out the value of T0PS2, T0PS1, T0PS0 bits in T0CON register if the value of the register is 0xF3

steps:
condition1:
1.Set the bits TM0ON and PSA which are in 7th position(TM0ON) and 3rd position(psa)
2.Take some hex value which is stored in a variable called n
3.Store the positions in variables
4.Then one is left shifted with 3(position) this can be ORed with one is again left shifted with 7 position
5.That final result can be again ORed with n which is having hex value.Then print n value as output
condition2:
6.Give the input some hex value as n to know the value of T0PS2, T0PS1, T0PS0 bits(position 0,1,2).
7.Use for loop for checking the values of first 3 bits.
8.That hex value is right shifted with 2,1 and 0 because last 3 bits are starting from 0 to 2,After right shifting result will be ANDed with 1.
9.That result can be stored in variable as x,Then print the x value.
*/
#include <stdio.h>

int main()
{
   int num,num1,num2;
   printf("Enter the number for TMR0ON\n");// input for the TMR0ON
   scanf("%d",&num);
   printf("Binery for TMR0oON register\n");// Binary for TMR0ON
   if(num>=0 && num<=255)
   {
   for(int bit=7;bit>=0;bit--)
   {
       printf("%d",((num>>bit)&1));
   }
   printf("\n");
   if((num & 136)==136) //Check the number is equal to that bit
   {
        printf("TMR0ON and PSA bit already set\n");
   }
   num1=(num|(136)); // if that bit is not set then OR operation for the set bit
   printf("After setting the TMR0ON and PSA bit\n");
   for(int bit=7;bit>=0;bit--)
   {
       printf("%d",((num1>>bit)&1));
   }
   printf("\n");
   
   printf("T0PS2, T0PS1, T0PS0 bits in T0CON register\n");
   if(num==243) // Check the register value is not 0xf0 
   {
       num2=num&7; //Doing adding operation with that number 
       printf("value of Register=%d",num2);
   }
}
  
return 0;
   
}
