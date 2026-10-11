#include <stdio.h>
#include <stdbool.h>
void hcf()
{//program to find the HCF of two number
  int n1,n2,i,hcf;
  printf("enter 1st no.:");
  scanf("%d",&n1);
  printf("enter 2nd no.:");
  scanf("%d",&n2);
  for (i=1;i<=n1 && i<=n2;i++)
  {
    if (n1%i==0 && n2%i==0)
      {
      hcf=i;
      }
  }
  printf("hcf of %d and %d is %d\n",n1,n2,hcf);
}
int main()
{
while (1)
  {
  char x;
  printf("\n(y/n) for loop to proceed :");
  scanf(" %c",&x);
  if (x=='y'||x=='Y')
    {
      hcf();
    }
  else if (x=='n'||x=='N')
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
