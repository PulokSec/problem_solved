#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

  int n, count = 0;
  scanf("%d", &n);
  char s[n + 1];
  scanf("%s", s);
  if (n < 0 || n > 100)
  {
    return 0;
  }
  for (int i = 0; i < n; i++)
  {
    int temp_count = 1;
    for (int j = i + 1; j < n; j++)
    {
      if (s[i] != s[j])
      {
        break;
      }
      temp_count++;
    }
    if (temp_count > count)
      count = temp_count;
  }

  printf("%d", count);

  return 0;
}