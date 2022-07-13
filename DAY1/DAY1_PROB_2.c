/*if it is a vowel or consonant

steps:
1.read charecter.
2.check whether the data is alphbet or not
3.if that charecter is vowel or consonant.
4.print with checking with that.
*/
#include <stdio.h>

int main()
{
    char c;
    printf("enter char.\n");
    scanf("%c",&c);
    
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    
    {
        
        printf("Vowel\n");
    }
    else
    printf("Cosonant");

    return 0;
}
