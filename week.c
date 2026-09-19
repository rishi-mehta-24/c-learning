#include <stdio.h>
int main()
{//display the day of the week based on a number (1–7)
  int a;
  printf("enter a no. b/w 1-7 :");
  scanf("%i",&a);
  if (a==1)
  {
    printf("monday\n");
  }
  else if (a==2)
  {
    printf("tuesday\n");
  }
  else if (a==3)
  { 
    printf("wednesday\n");
  }
  else if (a==4)
  { 
    printf("thursday\n");
  }
  else if (a==5)
  { 
    printf("friday\n");
  }
  else if (a==6)
  { 
    printf("saturday\n");
  }
  else if (a==7)
  { 
    printf("sunday\n");
  }
  else 
  {
    printf("input valid no\n");
  }
return 0;
}
