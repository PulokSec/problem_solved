#include <stdio.h>
int main(){
  long long int a,t;
  int sum = 0,rem;
  scanf("%lli",&a);
  t=a;
  while(t!=0)  
   {  
     rem = t%10;  
     t = t/10;
    sum = sum + rem;  
   } 
printf("%d" , sum);
  return 0;
}