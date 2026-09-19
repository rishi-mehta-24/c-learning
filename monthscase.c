#include <stdio.h>
int main()
{//to display the month name and number of days using switch-case for a given month number.
  int a;
  printf("enter no. b/w 1-12 :");
  scanf("%i",&a);
  switch (a)
  {
  case 1:
    printf("jan,31days\n");
    break;
  case 2:
    printf("feb,28days\n");
    break;
  case 3:
    printf("march,31 days\n");
    break;
  case 4:
    printf("april,30 days\n");
    break;
  case 5:
    printf("may,31 days\n");
    break;
  case 6:
    printf("june,30 days\n");
    break;
  case 7:
    printf("july,31 days\n");
    break;
  case 8:
    printf("august,31 days\n");
    break;
  case 9:
    printf("sept,30 days\n");
    break;
  case 10:
    printf("oct,31 days\n");
    break;
  case 11:
    printf("nov,30 days\n");
    break;
  case 12:
    printf("dec,31 days\n");
    break;
  default:
    printf("enter valid no.\n");
  }
return 0;
}
