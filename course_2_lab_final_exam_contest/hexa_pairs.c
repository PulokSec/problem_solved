#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int findGcd(int x, int y);
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t,n,i,j;
    scanf("%d",&t);
    int a[1000];
    int count = 0;
    while(t --){
    scanf("%d",&n);
      for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
       }
       for(i=0;i<n;i++)
       {
        for(j=0;j<n;j++){
          if(a[i] != a[j]){
            int temp = findGcd(a[i],a[j]);
            if(temp == 1){
              count++;
            }
          }
        }
       }
       printf("%d\n",count);
       count = 0;
    } 
    return 0;
}
int findGcd(int x, int y){
  if(x == 0){
    return y;
  }
  while(y !=0 ){
    if(x > y){
      x = x - y;
    }
    else{
      y = y - x;
    }
  }
  return x;
}