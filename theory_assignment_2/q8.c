#include <stdio.h>
#include <string.h>
int main()
{
  char str[100];
  int s;
  gets(str);
  scanf("%d", &s);

  for (int i = 0; i < strlen(str); i++)
  {
    if(str[i] + s > 122){
      str[i] = str[i] + s - 26;
    }
    else
    {
      str[i] = str[i] + s;
    }
  }

  puts(str);
  return 0;
}
