#include <stdio.h>
int checkPrime(int n);

int main()
{

  int n, flag;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  flag = checkPrime(n);

  if (flag == 1)
    printf("%d is not a prime number", n);
  else
    printf("%d is a prime number", n);

  return 0;
}

int checkPrime(int n)
{
  if (n == 0 || n == 1)
    return 1;

  int i;

  for (i = 2; i <= n / 2; ++i)
  {
    if (n % i == 0)
      return 1;
  }

  return 0;
}