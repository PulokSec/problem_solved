#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    unsigned int n,x[20];
    int max_even = 0;
    scanf("%u",&n);
    if(n < 1){
      return 0;
    }
    for(int i = 0; i < n; i++){
      scanf("%u",&x[i]);
    }

      for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
        if(x[i] != x[j]){
        int temp = x[i] + x[j];
        if(temp%2 == 0 && temp > max_even ){
          max_even = temp;
        }
      }
      }
    }
    for(int i = 0; i < n; i++){
      if(x[i] > max_even && x[i] % 2 == 0){
        max_even = x[i];
      }
    }

    if(max_even == 0){
      return 0;
    }
    printf("%d", max_even);
    
    return 0;
}