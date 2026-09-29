#include <stdio.h>
int main()
{//program to take a number as input and print its equivalent binary representation
  int r,b=0,n,p=1;
  printf("enter a no. :");
  scanf("%d",&n);
  while (n!=0)
    {
      r=n%2;
      b=b+r*p;
      n=n/2;
      p=p*10;
    }
  printf("its binary form is %d\n",b);
return 0;
}
