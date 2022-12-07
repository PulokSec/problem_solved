#include <stdio.h>
#include <math.h>  
#include <stdbool.h>  
bool isPrime(int num);
void averageEven(int arr[],int num);
int main()
{
  int n;
  scanf("%d", &n);
  int arra[n];
  for(int i = 0; i < n; i++){
  scanf("%d",&arra[i]);
  }
  averageEven(arra,n);
  return 0;
}
bool isPrime(int num){
int r = sqrt(num);
int check = 0;
 for(int i = 2; i <= r; i++){
  if(num%i == 0){
    check = 1;
    break;
  }
 }
 if(check == 1){
  return false;
 }
 else{
  return true;
 }
}
void averageEven(int arr[],int num){
  int sum = 0;
  int prime_count = 0;
  int even_count = 0;
  for(int i = 0; i < num; i++){
    if(isPrime(arr[i])){
      prime_count++;
    }
    if(arr[i] % 2 == 0){
      sum += arr[i];
      even_count++;
    }
  }
  float average = sum / even_count;
  printf("Prime numbers: %d\n", prime_count);
  printf("Average of all even integers: %.2lf\n", average);
}
