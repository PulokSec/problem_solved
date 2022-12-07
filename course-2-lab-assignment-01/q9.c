#include <stdio.h>
int main(){
  int n,s,k;
  int arr[20];
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  scanf("%d",&k);

  for(int j=k;j<n;j++){
    printf("%d ",arr[j]);
  }
  for(int l=0;l<k;l++){
    printf("%d ",arr[l]);
  }
  return 0;
}