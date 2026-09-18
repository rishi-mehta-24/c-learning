#include <stdio.h>
int main()
{//input a character and check whether it is a vowel or consonant
  char a;
  printf("enter a character :");
  scanf("%c",&a);
  if (a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
    {
      printf("%c is a vowel\n",a);
    }
  else
    {
      printf("%c is a consonant\n",a);
    }
return 0;
}
