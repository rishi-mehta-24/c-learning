#include <stdio.h>
int main()
{//program to reverse a given number
  int n,d,r=0;
  printf("enter no. to reverse :");
  scanf("%i",&n);
  for (;n!=0;n=n/10)
    {
      d=n%10;
      r=r*10+d;
    }
  printf("reverse of no is %i\n",r);
return 0;
}
