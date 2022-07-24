/*8.I). Write program to set (1) bits CIS, C2OUT, C1OUT in register “CMCON” if bits CHS3, CHS2, CHS1 bits are set to 0x06 in register “ADCON0”

steps:
1. Take the value for ADCON
2. Check the Value is qual to 0x06,If true that condition Ask for CMCON register.
3. set the bit for CMCON register if that CHS3, CHS2, CHS1 bits are not set

*/
#include <stdio.h>

int main() {
  
  unsigned int ADCON,CMCON;
  int bit=7;
  printf("Enter the Value for ADCON\n");
  scanf("%u",&ADCON); // data from user for ADCON 
  
  // IF ADCON is checking  if that 0X06
   if((ADCON & 88)==88)
  {
      // if condition true then ask for CMcon Input
      printf("Enter the Value for CMCON\n");
      scanf("%d",&CMCON);
      
     //printing the binery for CMcon
     printf("Binerry for CMCON:\t");
     for(bit=7;bit>=0;bit--)
     {
      printf("%d",((CMCON>>bit)&1));
    }
    printf("\n");    
    
    // Binery for ADCON
    printf("Binerry for ADCON:\t");
     for(bit=7;bit>=0;bit--)
     {
      printf("%d",((ADCON>>bit)&1));
     }
    // set the bit CMCON Register
      CMCON=(CMCON | (200));
      printf("\n");
      // After set bit print the binery of CMCON
      printf("After set the CMCON :");
     for(bit=7;bit>=0;bit--)
     {
      printf("%d",((CMCON>>bit)&1));
     }
  }
  // Not equal to CHS3, CHS2, CHS1 bits are not set 
  else {
  for(bit=7;bit>=0;bit--)
     {
      printf("%d",((CMCON>>bit)&1));
    }
    printf("\n");
   printf(" CHS3, CHS2, CHS1, CHS0 bits are not set\n");
  }
  return 0;
}
