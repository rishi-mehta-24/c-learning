#include <stdio.h>
int main()
{//swap two numbers without using a third variable
  int a,b;
  printf("enter 1st no.:");
  scanf("%i",&a);
  printf("enter 2nd no,:");
  scanf("%i",&b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("swap %i %i\n",a,b);
return 0;
}
