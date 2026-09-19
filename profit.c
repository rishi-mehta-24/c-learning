#include <stdio.h>
int main()
{//find profit or loss percentage given cost price and selling price
  int  cp,sp,p,l;
  double pp,lp;
  printf("enter cost price :");
  scanf("%i",&cp);
  printf("enter selling price :");
  scanf("%i",&sp);
  if (sp>cp)
  {
    p=sp-cp;
    pp=((float)p/cp)*100;
    printf("profit percent :%f %\n",pp);
  }
  else if (cp>sp)
  {
    l=cp-sp;
    lp=((float)l/cp)*100;
    printf("loss percent :%f %\n",lp);
  }
  else
  {
    printf("not loss neither profit\n");
  }
return 0;
}
