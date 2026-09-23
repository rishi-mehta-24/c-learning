#include <stdio.h>
int main()
{//learning loop
  int c;
  printf("1.check balance\n2.withdraw money\n3.exit\n");
  do
  {
    printf("enter your choice :");
    scanf("%d",&c);
  }
  while (c!=3);
return 0;
}
