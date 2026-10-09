#include <stdio.h>
#include <math.h>
int main()
{//better version of previous code
  int n,d=0,a,i,b=0,x,t;
  printf("enter a no. :");
  scanf("%d",&n);
  a=n;
  t=n;
  while (t!=0)
    {//let count no of letter in a no.
      d++;
      t=t/10;
    }
  while (n!=0)
    {
      x=n%10;
      b=b+pow(x,d);
      n=n/10;
    }
  if (a==b)
  {
    printf("armstrong\n");
  }
  else
  {
    printf("not armstrong\n");
  }
return 0;
}
