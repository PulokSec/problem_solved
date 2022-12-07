#include <stdio.h>
#include <string.h>
int main()
{
  char s[100];
  scanf("%s", &s);

  int hasString(char a)
  {
    int temp = 0;
    for (int i = 0; i < strlen(s); i++)
    {
      if (s[i] == a)
      {
        temp += 1;
        break;
      }
    }
    if (temp > 0)
      return 1;
    else
      return 0;
  }
  int count = hasString('1') + hasString('7') + hasString('9');

  if (count > 2)
    printf("Yes\n");
  else
    printf("No\n");


  return 0;
}
