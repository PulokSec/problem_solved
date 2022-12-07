#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a == b && b == c && c == a) 
      printf("Yes");
    else
      printf("No");
    return 0;
}