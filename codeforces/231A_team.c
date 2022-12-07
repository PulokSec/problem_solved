#include <stdio.h>
int main(){
  int a,b,c,n,solved=0;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
  scanf("%d %d %d",&a,&b,&c);
    if(a+b+c >= 2)
    solved++;
  }
  printf("%d",solved);
  return 0;
}