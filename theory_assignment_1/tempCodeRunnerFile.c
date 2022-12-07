#include <stdio.h>
int main(){
  long long int a; 
  int count = 0;
  scanf("%lli",&a);
  while(a!=0)  
   {  
     a = a/10;  
       count++;  
   } 
printf("%d digits" , count);
  return 0;
}