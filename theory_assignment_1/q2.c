#include <stdio.h>
int main()
{
  int a, max, min;
  scanf("%d", &a);
  max = min = a;
  for (int i = 0; i < 3; i++)
  {
    scanf("%d", &a);
    if (max < a)
      max = a;
    else if (min > a)
      min = a;
  }
  printf("Largest = %d \n", max);
  printf("Smallest = %d", min);
  return 0;
}