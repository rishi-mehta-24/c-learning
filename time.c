#include <stdio.h>
int main()
{//input time in seconds and convert it to hours:minutes:seconds format
  int s1,s2,h,m;
  printf("enter total time in second :");
  scanf("%i",&s1);
  h=s1/3600;
  s1=s1%3600;
  m=s1/60;
  s2=s1%60;
  printf("%i:%i:%i\n",h,m,s2);
return 0;
}
  
