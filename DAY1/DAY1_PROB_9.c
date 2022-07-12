//Implement basic logic gates using C (AND, OR, NOT)

#include<stdio.h>
int main()
{

int n1,n2;

printf("input=");
scanf("%d%d",&n1,&n2);
printf("n1=%d n2=%d\n",n1,n2);
printf("n1&&n2=%d\nn1||n2=%d\n",n1&&n2,n1||n2);
printf("!n1=%d !n2=%d\n",!n1,!n2);
return 0;
}
