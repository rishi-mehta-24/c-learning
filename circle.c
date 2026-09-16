#include <stdio.h>
#include <math.h>
int main()
{//area and circumference of circle given radius of circle
  float r,pi,c,a;
  printf("radius of circle :");
  scanf("%f",&r);
  pi=3.14;
  c=2*pi*r;
  a=pi*pow(r,2);
  printf("area of circle %f\ncircumference of circle %f\n",a,c);
return 0;
}

