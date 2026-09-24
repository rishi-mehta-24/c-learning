#include <stdio.h>
int main()
{//program to calculate the factorial of a number
  int n,f=1,i;
  printf("enter range for factorial :");
  scanf("%d",&n);
  for (i=1;i<=n;i++)
  {
    f=f*i;
  }
  printf("factorial of %d\n",n);
  printf("Is %d\n",f);
return 0;
}
