#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
  int n,t;
  scanf("%d", &t);
  int arr[t+1];
  for(int j=0;j<t;j++){
    int c = 0;
    scanf("%d",&n);

    if(n == 1){
      c++;
    }
    for(int k=2;k<n;k++){
      if(n%k == 0){
        c++;
        break;
      }
    }
    if(c == 0){
      arr[j] = 0;
    }
    else{
      arr[j] = 1;
    }
  }
  for(int i=0;i<t;i++){
    if(arr[i] == 0)
      printf("Yes\n");
    if(arr[i] == 1)
      printf("No\n");
  }
  
  return 0;
}