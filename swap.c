#include <stdio.h>
int main()
{//swap two numbers using a third variable
  int a,b,c;
  printf("enter 1st no.:");
  scanf("%i",&a);
  printf("enter 2nd no.:");
  scanf("%i",&b);
  c=a;
  a=b;
  b=c;
  printf("after swap %i %i\n",a,b);
return 0;
}
