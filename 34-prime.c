#include <stdio.h>
#include <stdbool.h>
void prime()
{//program to check if a number is prime
  int n,a=0,i;
  printf("enter a no. :");
  scanf("%d",&n);
  for (i=2;i<n;i++)
    {
      if (n%i==0)
        {
          a=1;
          break;
        }
    }
  if (a==1)
  { 
    printf("its not a prime no.\n");
  }
  else  {
    printf("its prime no.\n");
  }
}
int main()
{ 
  char x;
  while (1)
  {
    printf("type y/n for loop:");
    scanf(" %c",&x);
    if (x=='y' || x=='Y')
      {
        prime();
      }
    else
      {
        break;
      }
  }
return 0;
}
