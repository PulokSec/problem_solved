#include <stdio.h>
#include <math.h>
void beautiful_array(int arr[],int mid);
 int main()
{
  int n;
  scanf("%d", &n);
  int ara[n];
  for (int i = 0; i < 5; ++i)
    scanf("%d", ara + i);

  int mid = ceil(n/2);
  beautiful_array(ara,mid);
  return 0;
}
void beautiful_array(int arr[],int mid)
{
  int count = 0;
  for (int i = 0; i < 5; ++i)
  {
    int t = *arr + i;
    while (t != 0)
    {
      int rem = t % 10;
      if (rem == 7)
      {
        count++;
        break;
      }
      t = t / 10;
    }
  }
  if(count >= mid)
    printf("Beautiful\n");
  else
    printf("Ugly\n");

  return;
}
