#include <stdio.h>
int main()
{//password learing got idea from chat gpt ...
  int p;
  int a=0;
  printf("enter password :");
  scanf("%d",&p);
  while (p!=1234 && a<3)
  {
    printf("incorrect password...try again...\nu only have 4 try :");
    scanf("%d",&p);
    a++;
  }
return 0;
}
