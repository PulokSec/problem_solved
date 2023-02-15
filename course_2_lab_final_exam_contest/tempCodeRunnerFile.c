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

  for (i = 1; i < t; i++)
  {
    scanf("%d", &n);
    int arr[n];
    for (k = 0; k < n; k++)
    {
      scanf("%d", &arr[i]);
    }
    scanf("%d", &target);
    for (j = 0; j < n; j++)
    {
      if (arr[j] == target)
      {
        printf("Case %d: %d\n", i, j + 1);
        break;
      }
      else
      {
        printf("Case %d\n: NOT Found", i);
      }
    }
  }

  return 0;
}