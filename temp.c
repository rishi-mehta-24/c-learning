#include <stdio.h>
int main()
{//convert temperature from Celsius to Fahrenheit
  float c,f;
  printf("enter temperature in celcius :");
  scanf("%f",&c);
  f=(c*(9.0/5.0))+32;
  printf("temperature in fahrenheit :%f\n",f);
return 0;
}
