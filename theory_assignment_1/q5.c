#include <stdio.h>
int main(){
  int a,t,temp;
  scanf("%d",&a);
  t=a;
  while(t!=0)  
   {  
  printf("%d " , t);
     if(t%2 == 0)
      t = t/2; 
     else
     t = t - 1;
   }
  return 0;
}