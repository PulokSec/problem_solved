#include <stdio.h>
#include <math.h>  
int main()
{
  int n;
  scanf("%d", &n);
  int r = sqrt(n);
 for(int i = 2; i <= r; i++){
  if(n%i == 0){
    printf("Composite\n");
    break;
  }
  else{
  printf("Prime\n");
  break;
  }
 }
  return 0;
}