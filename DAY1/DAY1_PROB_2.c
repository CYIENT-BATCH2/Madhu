//if it is a vowel or consonant

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
