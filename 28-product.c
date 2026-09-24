#include <stdio.h>
int main()
{//program to print the product of even numbers from 1 to n...
  int n,p=1,i;
  printf("enter a even no. :");
  scanf("%d",&n);
  if (n%2==0)
    {
      for (i=2;i<=n;i+=2)
        {
          p=p*i;
          printf("the no. are :%d\n",i);
        }
      printf("the product is :%d\n",p);
    }
  else 
    {
      printf("pls enter even integer \n");
    }
return 0;
}
