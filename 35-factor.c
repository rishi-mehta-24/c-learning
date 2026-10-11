#include <stdio.h>
#include <stdbool.h>
void factor()
{//program to print all factors of a given number
  int n,i,a;
  printf("enter a no. ");
  scanf("%d",&n);
  printf("factor of %d are :",n);
  for (i=1;i<=n;i++)
  {
    a=n%i;
    if (a!=0)
      {
      continue;
      }
  printf(",%d",i);
  }
}
int main()
{
  while (1)
  {
    char x;
    printf("\ntype (y/n) to continue or discontinue :");
    scanf(" %c",&x);
    if (x=='y'||x=='Y')
    {
    factor();
    }
    else if (x=='n'||x=='N')
    {
    break;
    }
    else
    {
    printf("enter valid character\n");
    }
  }
return 0;
}
