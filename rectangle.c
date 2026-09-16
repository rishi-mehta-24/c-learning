#include <stdio.h>
int main()
{//area and perimeter  of rectangle
  float l,b,a,p;
  printf("enter length :");
  scanf("%f",&l);
  printf("enter breath :");
  scanf("%f",&b);
  a=l*b;
  p=2*(l+b);
  printf("area of rectange %f\nperimeter of rectangle %f\n",a,p);
return 0;
}
