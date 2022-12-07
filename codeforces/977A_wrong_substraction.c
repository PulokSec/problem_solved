#include <stdio.h>
int main(){
  int a,b;
  scanf("%d %d",&a,&b);
  for(int i=0;i<b;i++){
  if(a%10 == 0)
  a = a/10;
  else
    a = a - 1;
  }
  printf("%d",a);
  return 0;
}