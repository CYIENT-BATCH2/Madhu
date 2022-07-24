/*2.Write a code to swap even bits with odd bits in unsigned long variable(uint64).


Example: bit 0 with bit 1; bit 2 with bit 3; bit 4 with bit

steps:
1]Initialize the two variables
2]Do bitwise operation x with 0xAAAAAAAA so we get all even bit
3]Do bitwise operation x with 0x55555555so we get all odd bit 
4]then do the shifting operation right shift for even bits and left shift for odd bits
5]Use logiacal OR opeartion to add both even and odd bits and return*/

*/


#include <stdio.h>

int main()

{
    
unsigned int data,even_bit,odd_bit,swap;
int pos=7;
printf("enter no.\n");
scanf("%u",&data);

printf("binary print\n");
while(pos>=0)
{
    printf("%d",(data>>pos)&1);
    pos--;
}
printf("\n");

//even bit

even_bit=data&0xAAAAAAAA;

even_bit>>=1;

//odd bit
odd_bit=data&0x555555555;


odd_bit<<=1;

//swap bit

swap=(odd_bit|even_bit);

for(pos=7;pos>=0;pos--)
{
    
printf("%d",(swap>>pos)&1);
}

return 0;
}
