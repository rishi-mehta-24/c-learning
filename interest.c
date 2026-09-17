#include <stdio.h>
#include <math.h>
int main()
{//calculate simple and compound interest for given principal, rate, and time.
  int p,r,t;
  double si,ci,a;
  printf("enter principle amount :");
  scanf("%i",&p);
  printf("enter rate for interest :");
  scanf("%i",&r);
  printf("enter time period(year) :");
  scanf("%i",&t);
  si=(p*r*t)/100;
  a=p*pow(1+(r/100.0),t);
  ci=a-p;
  printf("simple interest %f\ncompund interest %f\n",si,ci);
return 0;
}
