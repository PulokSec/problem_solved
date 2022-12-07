#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[21];
    long long int a,b;
    fgets(s,sizeof(s),stdin);
    scanf("%d %d",&a,&b);
    int sum = 0;
    for(int i=0; i < strlen(s); i++) {
      if(s[i] == '+'){
        sum += a+b;
      }
      else if(s[i] == '*'){
        sum += a*b;
    }
    }
    printf("%lli",sum);
    return 0;
}