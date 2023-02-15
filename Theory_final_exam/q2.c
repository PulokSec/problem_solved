#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n,n1=0,n2=1,n3;
  scanf("%d", &n);
  if(n == 0){
  printf("\n%d",0);   
  }
  else if(n == 1){
  printf("\n%d, %d",n1,n2);   
  }
  else{
  printf("\n%d, %d",n1,n2);   
 for(int i=2;i<n;++i)   
 {    
  n3=n1+n2;    
  printf(", ");    
  printf("%d",n3);    
  n1=n2;    
  n2=n3;    
 } 
  }
  return 0;
}
