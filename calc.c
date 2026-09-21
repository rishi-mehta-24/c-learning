#include <stdio.h>
#include <math.h>
int main()
{//program to implement a basic calculator using switch-case for +, -, *, /, %
  double a,b,d;
  char c;
  printf("enter 1st no. :");
  scanf("%lf",&a);
  printf("enter 2nd no. :");
  scanf("%lf",&b);
  printf("enter what u want to do with no. (symbol) :");
  scanf(" %c",&c);
  switch (c)
  {
    case '+':
      d=a+b;
      printf("u have selected + %f\n",d);
      break;
    case '-':
      d=a-b;
      printf("u have selected - %f\n",d);
      break;
    case '*':
      d=a*b;
      printf("u have selected * %f\n",d);
      break;
    case '/':
      d=a/b;
      printf("u have selected / %f\n",d);
      break;
    case '%':
      d=fmod(a,b)
      printf("u have selected %% %f\n",d);
      break;
    default:
      printf("enter valid symbol\n");
  }
return 0;
}
