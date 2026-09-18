#include <stdio.h>
#include <math.h>
int main()
{//find the roots of a quadratic equation and categorize them
  int a,b,c,d,x,y;
  printf("u have equation in form ax^2+bx+c=0\ninsert a:");
  scanf("%i",&a);
  printf("insert b:");
  scanf("%i",&b);
  printf("insert c:");
  scanf("%i",&c);
  d=pow(b,2)-4*a*c;
  x=(-b+pow(d,(1/2)))/2*a;
  y=(-b-pow(d,(1/2)))/2*a;
  if (d>0)
  {
    printf("roots are %i %i\ntwo real and distinct roots\n",x,y);
  }
  else if (d<0)
  {
    printf("two complex conjugate roots\n");
  }
  else
  {
    printf("roots are %i %i\none real root\n",x,y);
  }
return 0;
}
