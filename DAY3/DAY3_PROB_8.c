//check given i/p by user is alphabet or not alphabet

#include<stdio.h>
int main()
{
char ch;
printf("Give any input=");
scanf("%c",&ch);
((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))?printf("Alphabet"):printf("not Alphabet");
}
