//numbers 1-9 are seated in ascending order

#include <stdio.h>

int main()
{
    int n1,n2,n3,n4,n5,n6,n7,n8,n9;
    printf("enter roll no. =");
    scanf("%d%d%d%d%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9);
    printf("%d %d %d %d %d %d %d %d %d\n",n1,n2,n3,n4,n5,n6,n7,n8,n9);
    l:
if(n1>n2){n1=n1+n2;n2=n1-n2;n1=n1-n2;goto l;}
if(n2>n3){n2=n2+n3;n3=n2-n3;n2=n2-n3;goto l;}
if(n3>n4){n3=n3+n4;n4=n3-n4;n3=n3-n4;goto l;}
if(n4>n5){n4=n4+n5;n5=n4-n5;n4=n4-n5;goto l;}
if(n5>n6){n5=n5+n6;n6=n5-n6;n5=n5-n6;goto l;}
if(n6>n7){n6=n6+n7;n7=n6-n7;n6=n6-n7;goto l;}
if(n7>n8){n7=n7+n8;n8=n7-n8;n7=n7-n8;goto l;}
if(n8>n9){n8=n8+n9;n9=n8-n9;n8=n8-n9;goto l;}
 printf("ascending order =%d %d %d %d %d %d %d %d %d\n",n1,n2,n3,n4,n5,n6,n7,n8,n9);

return 0;
