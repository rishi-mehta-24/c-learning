#include <stdio.h>
int main()
{/*90-100: Grade A  80-89: Grade B  70-79: Grade C  60-69: Grade D  below 60: Grade F*/
  int a;
  printf("enter your percentage :");
  scanf("%i",&a);
  if (a>=90)
  {
    printf("A grade\n");
  }
  else if (a>=80)
  {
    printf("B grade\n");
  }
  else if (a>=70)
  {
    printf("C grade\n");
  }
  else if (a>=60)
  {
    printf("D grade\n");
  }
  else
  {
    printf("fail\n");
  }
return 0;
}
