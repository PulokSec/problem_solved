#include <stdio.h>
#include <stdbool.h>
int main()
{
  int n;
  scanf("%d", &n);
  int sum = 0;

  bool turn = true;

  for (int i = 1; i <= n; i++)
  {

    if (turn == true)
    {
      sum += i;
    }
    else
    {
      sum -= i;
    }
    if (i % 3 == 0)
    {
      if (turn == true)
      {
        turn = false;
      }
      else
      {
        turn = true;
      }
    }
  }

  printf("%d", sum);
}