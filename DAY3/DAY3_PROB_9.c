/*

Write program to achieve below conditions



1.Convert 0xFF to binary value

2.Convert binary value 00010001 to hex value

3.Convert 0xAA to decimal and to binary

4.Concert 01010101 to decimal and to hex

*/

#include<stdio.h>
int main()
{
long int hb=0xFF,hbd=0xAA,bh=0b00010001,bdh=0b01010101,pos=7,r,i=1,s=0,pos1=7;

printf("1.Convert 0xFF to binary\n");
l1:
if(pos>=0)
{
    printf("%ld ",hb>>pos&1);
    pos--;
    goto l1;
}
printf("\n");
printf("------------------------------\n");
//----------------------------------------------------------

printf("2.Convert binary value 00010001 to hex value\n");

printf("binary to hex=%lx\n",bh);
printf("------------------------------\n");

//-----------------------------------------------------------
printf("3.Convert 0xAA to decimal and to binary\n");


printf("hex 0xAA to decimal=%ld\n",hbd);

printf("hex 0xAA to binary=");
l4:
if(pos1>=0)
{
    
    printf("%ld ",(hbd>>pos1)&1);
    pos1--;
    goto l4;
}

printf("\n");
printf("------------------------------\n");
//-----------------------------------------------------------
printf("4.Concert 01010101 to decimal and to hex\n");
printf("hex to decimal=%ld\n",bdh);
printf("binary to hex=%lx\n",bdh);

}


