#include <stdio.h>
int main()
{//input an integer and check whether it is even or odd using if–else.
  int a;
  printf("enter a integer :");
  scanf("%i",&a);
  if (a%2==0)
  {
    printf("%i its an even interger\n",a);
  }
  else
  {
    printf("%i its a odd interger\n",a);
  }
return 0;
}
