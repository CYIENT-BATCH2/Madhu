/*convert Celsius form of temperature into Fahrenheit and vice versa

steps:
1.read n
2.convert celsius to farenheit by farmulae n=(n*1.8)+32;
*/

#include<stdio.h>
int main()
{
float fh,cl;
printf("enter temp in cl=");
scanf("%f",&cl);
fh=(cl*1.8)+32;
printf("%2fcl=%2ffh\n",cl,fh);
printf("enter temp in fh=");
scanf("%f",&fh);
cl=(fh-32)/1.8;
printf("%2ffh=%2fcl\n",fh,cl);

return 0;
}
