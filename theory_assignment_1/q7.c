#include <stdio.h>
int main()
{
  int a,b,m,n;
  scanf("%d %d", &a,&b);
  m = a;
  n = b;
 while (n > 0) {
        int r = m % n;
        m = n;
        n = r;
    }
  printf("The GCD of %d and %d is %d.\n", a,b,m);
  return 0;
}