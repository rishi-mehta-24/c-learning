#include <stdio.h>
int main()
{//program to check if a number is a palindrome
  int o,n,d,r=0;
  printf("enter a no. :");
  scanf("%d",&n);
  o=n;
  while (n!=0)
    {
      d=n%10;
      r=r*10+d;
      n/=10;
    }
  printf("the reverse of the no. is %d\n",r);
  if (o==r)
    {
      printf("its a palindrome no.\n");
    }
  else
    {
      printf("its not a palindrome no.\n");
    }
return 0;
}
