#include <stdio.h>
#include <string.h>
int main()
{
  char s[100];
  gets(s);

  for (int i = 0; s[i] != '\0'; i++)
  {
    if (s[i] >= 'a' && s[i] <= 'z')
    {
      s[i] = s[i] - 32;
    }
    else if (s[i] >= 'A' && s[i] <= 'Z')
    {
      s[i] = s[i] + 32;
    }
  }

  puts(s);
  return 0;
}
