#include <stdio.h>

void swap(int p,int q);
void sort_array(int a[],int n);
void find_median(int a[], int n);
int main() {
   int n;
   scanf("%d",&n);
   int a[n+1];
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
   sort_array(a,n);
   find_median(a,n);
   return 0;
}
void swap(int p,int q) {
   int t;
   t=p; 
   p=q; 
   q=t;
}

void sort_array(int a[],int n) { 
   int i,j;

   for(i = 0;i < n-1;i++) {
      for(j = 0;j < n-i-1;j++) {
         if(a[j] > a[j+1])
            swap(a[j],a[j+1]);
      }
   }
}
void find_median(int a[], int n){
  if(n%2 != 0){
    n = (n+1)/2 - 1;
       printf("Median = %d \n", a[n]);
  }
  else{
    n = (n+1)/2 - 1;
    printf("Median = %d \n", (a[n] + a[n+1] ) / 2);
  }
}