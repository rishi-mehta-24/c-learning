#include <stdio.h>
int main()
{//input three numbers and find the largest among them using
  int a,b,c,d;
  printf("enter a no. :");
  scanf("%i",&a);
  printf("enter a no. :");
  scanf("%i",&b);
  printf("enter a no. :");
  scanf("%i",&c);
  d=a;
  if (b>=d)
  {
    d=b;
  }
  if (c>=d)
  {
    d=c;
  }
  printf("%i is the largest\n",d);
return 0;
}
