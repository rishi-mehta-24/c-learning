#include <stdio.h>
int main()
{/*calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit*/
  int d,f;
  printf("enter units consumed:");
  scanf("%i",&d);
  if (d<=100)
  {
    f=d*5;
    printf("bill is %i \n",f);
  }
  else if (d<=200)
  {
    f=500+(d-100)*7;
    printf("bill is %i \n",f);
  }
  else if (d<=300)
  {
    f=1200+(d-200)*10;
    printf("bill is %i \n",f);
  }
  else
  {
    f=2200+(d-300)*12;
    printf("bill is %i \n",f);
  }
return 0;
}
