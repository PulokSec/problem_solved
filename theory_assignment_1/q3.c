#include <stdio.h>
int main(){
  long long int a,t;
  int count = 0,rem;
  scanf("%lli",&a);
  t=a;
  while(t!=0)  
   {  
     rem = t%10;  
     t = t/10;
    count++;  
   } 
printf("%d digits" , count);
  return 0;
}