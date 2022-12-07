#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d",&n);
        if(n < 0)
            printf("-1");
        else if(n%3 == 0)
            printf("%d",n/3);
        else
            printf("-1");
    return 0;
}