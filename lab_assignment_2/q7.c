#include <stdio.h>
#include <math.h>
#include <string.h>

void swap(int *a, int *b);
int main()
{
  int n, q, l, r;
  scanf("%d", &n);
  if (n < 2 || n > 100)
  {
    return 0;
  }
  int arra[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", arra + i);
  }
  scanf("%d", &q);
  while (q != 0)
  {
    scanf("%d %d", &l, &r);
    if (l >= 1 && r <= 100 && l != r)
    {
      swap(arra + l - 1, arra + r - 1);
    }
    else
    {
      break;
      return 0;
    }
    q--;
  }
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arra[i]);
  }
  return 0;
}

void swap(int *a, int *b)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}
