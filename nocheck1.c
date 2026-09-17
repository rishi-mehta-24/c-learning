#include <stdio.h>
int main()
{//input an integer and check whether it is positive, negative or zero
  int a;
  printf("enter the integer :");
  scanf("%i",&a);
  if (a>=0)
  {
    if (a>0)
      {
        printf("%i is a positive no.\n",a);
      }
    else
      {
        printf("%i is a zero\n",a);
      }
  }
  else
    {
      printf("%i is a negative no.\n",a);
    }
return 0;
}   
