/*check given i/p by user is alphabet or not alphabet
steps:
1.read c
2.check alpha or not
*/

#include<stdio.h>
int main()
{
char ch;
printf("Give any input=");
scanf("%c",&ch);
((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))?printf("Alphabet"):printf("not Alphabet");
}
