#include <stdio.h>

void fourConsecutiveEven(int a);
int main()
{
  int T, n;
  scanf("%d", &T);
  if (T > 3)
    return 0;
  while (T != 0)
  {
    scanf("%d", &n);
    if (n <= 5000)
    {
      fourConsecutiveEven(n);
    }
    else
    {
      break;
      return 0;
    }
    T--;
  }

  return 0;
}
void fourConsecutiveEven(int a)
{
  int num[4];
  int x = (a - 12) / 4;
  num[0] = x;
  num[1] = x + 2;
  num[2] = x + 4;
  num[3] = x + 6;

  for (int i = 0; i < 4; i++)
  {

    printf("%d ", num[i]);
  }
  printf("\n");
}