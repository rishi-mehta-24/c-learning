#include <stdio.h>
int main()
{//input cr chcrrcrcter crnd check whether it is crn upperccrse crlphcrbet, lowerccrse crlphcrbet, digit, or specicrl chcrrcrcter
  char cr;
  printf("enter a character :");
  scanf("%c",&cr);
  if (cr>='A' && cr<='Z')
    {
      printf("%c is Uppercase character",cr);
    }
  else if (cr>='a' && cr<='z')
    {
      printf("%c is Lowercase character",cr);
    }
  else if (cr>='0' && cr<='9')
    {
      printf("%c is a numeric character",cr);
    }
  else
    {
      printf("%c is a special character",cr);
    }
return 0;
}

