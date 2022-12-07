#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  printf("The factors of 39 are: ");
 for(int i = 1; i <=n; i++){
  if(n%i == 0){
    printf("%d",i);
    if(i < n)
    printf(", ");
  else
  printf(".\n");
  }
 }
  return 0;
}