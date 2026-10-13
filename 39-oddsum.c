#include <stdio.h>
#include <stdbool.h>
void odd()
{
  int n,a,s=0;
  printf("enter a no.:");
  scanf("%d",&n);
  while (n!=0)
  {
    a=n%10;
    n=n/10;
    if (a%2!=0)
    {
      s+=a;
    }
    else
    {
      continue;
    }
  }
  printf("the sum of odd digit of your no is %d\n",s);
}
int main()
{
  while (1)
  {
    char x;
    printf("type (y/n) to continue to discontinue:");
    scanf(" %c",&x);
    if (x=='y'||x=='Y')
    {
      odd();
    }
    else if (x=='n' || x=='N')
    {
      break;
    }
    else
    {
      printf("enter valid symbol\n");
    }
  }
return 0;
}
