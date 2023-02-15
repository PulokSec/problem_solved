#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,i,j,count = 0;
    scanf("%d",&n);
    char str[n];
    scanf("%s",str);
    for(i=0;i<n;i++)
    {
      int temp = 0;
      for(j=0;j<n;j++){
        if(str[i]==str[j])
          temp ++;
      }
      if(temp < 2){
        count++;
      }
    }
    printf("%d\n",count);
    return 0;
}