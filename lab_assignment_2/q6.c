#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isDivisibleByThree(int a);
bool isDivisibleByFive(int a);

int main()
{
  int n;
  scanf("%d", &n);
  if (n < 1 || n > 100)
  {
    return 0;
  }
  int arra[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", arra + i);
  }
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    if (isDivisibleByThree(arra[i]) || isDivisibleByFive(arra[i]))
    {
      count++;
    }
  }
  if (count > 0)
    printf("%d\n", count);
  else
    printf("-1\n");
  return 0;
}

bool isDivisibleByThree(int a)
{
  if (a % 3 == 0)
    return true;
  else
    return false;
}
bool isDivisibleByFive(int a)
{
  if (a % 5 == 0)
    return true;
  else
    return false;
}
