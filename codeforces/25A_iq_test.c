#include <stdio.h>
int main(){
  int a[100],n;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  if(a[i+1]%10 == 0)
  a = a/10;
  else
    a = a - 1;
  }
  printf("%d",a);
  return 0;
}