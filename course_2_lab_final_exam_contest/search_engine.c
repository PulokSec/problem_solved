#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  int t, n, target, i, j, k;
  scanf("%d", &t);
  if (t < 1 || t > 20)
  {
    return 0;
  }

  for (i = 1; i <= t; i++)
  {
    scanf("%d", &n);
    int arr[n];
    for (k = 0; k < n; k++)
    {
      scanf("%d", &arr[k]);
    }
    scanf("%d", &target);
    int temp = 0;
    int pos;
    for (j = 0; j < n; j++)
    {
      if (arr[j] == target)
      {
        temp++;
        pos = j + 1;
        break;
      }
    }
    if (temp > 0)
    {
      printf("Case %d: %d\n", i, pos);
    }
    else
    {
      printf("Case %d: Not Found\n", i);
    }
  }

  return 0;
}