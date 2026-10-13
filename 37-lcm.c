#include <stdio.h>
#include <stdbool.h>
void lcm()
{//program to find lcm of 2 no.
  int n1,n2,i,lcm;
  printf("enter 1st no.:");
  scanf("%d",&n1);
  printf("enter 2nd no.:");
  scanf("%d",&n2);
  for (i=1;i<=n1*n2;i++)
  {
    if (i%n1==0 && i%n2==0)
    {
      lcm=i;
      break;
      //since lcm is least common multiple if we not use break program will run till n1*n2 and find highest value 
    }
  }
  printf("lcm of %d ,%d is %d\n",n1,n2,lcm);
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
      lcm();
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
