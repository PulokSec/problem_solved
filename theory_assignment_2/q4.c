#include <stdio.h>
#include <string.h>
void sortedEvenOdd(int a, int b);
int main()
{
  int n,k;
  scanf("%d %d", &n, &k);
  sortedEvenOdd(n,k);
  return 0;
}
void sortedEvenOdd(int a, int b)
  {
    int l = a/2;
    int j=0,k=0;
    int temp[100],res[100];
    for(int i = 0; i < a; i++){
      temp[i] = i+1;
    }
    for(int i = 0; i < a; i++){
      if (temp[i] % 2 == 0) {
            res[j] = temp[i];
            j++;
        }
        else if (temp[i] % 2 != 0) {
            res[l+k] = temp[i];
            k++;
        }
    }
    for(int j = 0; j < a; j++){
    printf("%d ",res[j]);
    }
    printf("\n");
    printf("The %dth element in this sequence is %d\n",b,res[b-1]);
     return;
  }