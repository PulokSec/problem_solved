#include <stdio.h>
#include <string.h>
void sortString(char *newInStr, char *newOutStr);
int main()
{
  char inStr[100], outStr[100];
  gets(inStr);
  sortString(inStr, outStr);
  puts(outStr);
  return 0;
}
void sortString(char *newInStr, char *newOutStr)
{
  int countArr[256] = {0};
  int i, j, len;
  len = strlen(newInStr);
  for (i = 0; i < len; i++)
  {
    countArr[newInStr[i]]++;
  }
  for (i = 0, j = 0; i < 256; i++)
  {
    if (countArr[i] != 0)
    {
      while (countArr[i] > 0)
      {
        newOutStr[j++] = i;
        countArr[i]--;
      }
    }
  }
  newOutStr[j] = '\0';
}