#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d",&n);

    if(n==1)
    {
        printf("%d",n);
    }
    else
    {
        for(int i=1; i<=n; i++)
        {
            if(i==1)
            {
                for(int j=i; j<=n; j++)
                {
                    printf("%d",j);
                }
            }
            if(i>1 && i<n)
            {
                printf("%d",i);
                for(int k=1; k<= n-2 ; k++)
                {
                    printf(" ");
                }
                printf("%d",n);
            }
            if(i==n)
            {
                for(int j=1; j<=n; j++)
                {
                    printf("%d",n);
                }
            }
            printf("\n");
        }
    }
    return 0;
}