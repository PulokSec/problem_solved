#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num1, num2, max;
  num1 = 100;
  num2 = 20;

  max = num1 >= num2 ? num1 : num2;

  printf("Maximum Number from %d and %d is %d", num1, num2, max);
  return 0;
}