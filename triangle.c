#include <stdio.h>
int main()
{//to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths
  int a,b,c;
  printf("enter length of triange\na :");
  scanf("%i",&a);
  printf("b :");
  scanf("%i",&b);
  printf("c :");
  scanf("%i",&c);
  if (a==b && b==c)
  {
    printf("its a equilateral triangle\n");
  }
  else if (a!=b && b!=c && c!=a)
  {
    printf("its a scalen triangle\n");
  }
  else
  {
    printf("its a isosceles triangle\n");
  }
return 0;
}

