#include <stdio.h>
int main()
{//input a year and check whether it is a leap year
  int a;
  printf("enter year :");
  scanf("%i",&a);
  if (a%400==0)
    {
      printf("%i is a leap year\n",a);
    }
  else if (a%100==0)
    {
      printf("%i is not a leap year\n",a);
    }
  else if (a%4==0)
    {
      printf("%i is a leap year\n",a);
    }
  else 
    {
      printf("%i is not a leap year\n",a);
    }
return 0;
}
