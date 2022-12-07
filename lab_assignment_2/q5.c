#include <stdio.h>
#include <math.h>

void sumOfOddOddEvenEven(int a[], int size);

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
    scanf("%d", &arra[i]);
  }
  sumOfOddOddEvenEven(arra, n);
  return 0;
}

void sumOfOddOddEvenEven(int a[], int size)
{
  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    if ((i + 1) % 2 == 0 && a[i] % 2 == 0)
    {
      sum += a[i] + i + 1;
    }
    else if ((i + 1) % 2 != 0 && a[i] % 2 != 0)
    {
      sum += a[i] + i + 1;
    }
  }
  printf("%d\n", sum);
}