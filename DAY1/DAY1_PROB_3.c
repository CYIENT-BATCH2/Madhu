/*The entire area of a circular garden
steps:
1.read radious
2.apply formula pi * r* r
3.print after calculation.
*/
#include <stdio.h>

int main()
{
    int r;
    float a;
    printf("enter char.\n");
    scanf("%d",&r);
    
  a=3.14*r*r;
  
  printf("area of circle=%f\n",a);
    return 0;
}
