/*leap years in the interval 1990-2022.
steps:
1. checking all year with %4 %100 %400
2.and counting and printing .
*/

#include<stdio.h>
int main()
{
int y=1991,a=1990,b=2022;
printf("leap years in the interval 1990-2022\n");
l:
if(y>a&&y<b)
{
if((y%4==0)&&(y%100!=0)||(y%400==0))
printf("leap year=%d\n",y);
y++;
goto l;
}
return 0;
}
