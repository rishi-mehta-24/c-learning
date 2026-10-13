#include <stdio.h>
#include <stdbool.h>
void sum()
{
  int n,i=0,a;
  printf("enter the no.:");
  scanf("%d",&n);
  while (n!=0)
  {
    a=n%10;
    i=i+a;
    n=n/10;
  }
  printf("the sum is %d\n",i);
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
      sum();
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
