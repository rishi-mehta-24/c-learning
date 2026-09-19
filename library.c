#include <stdio.h>
int main()
{/*calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled*/
  int d,f;
  printf("enter the day :");
  scanf("%i",&d);
  if (d<=5)
  {
    f=d*2;
    printf("fine is %i\n",f);
  }
  else if (d<=10)
  {
    f=10+(d-5)*4;
    printf("fine is %i\n",f);
  }
  else if (d<=30)
  {
    f=30+(d-10)*6;
    printf("fine is %i\n",f);
  }
  else
  {
    printf("membership cancelled\n");
  }
return 0;
}
