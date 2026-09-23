#include <stdio.h>
int main()
{//program to print the sum of the first n odd numbers
  int n,s;
  printf("range of odd no.(n) :");
  scanf("%d",&n);
  s=n*n;
  for (int i=1;i<=(2*n);i+=2)
  {
  printf("%d\n",i);
  }
  printf("sum of 1st n odd no. are :%d\n",s);
return 0;
}
