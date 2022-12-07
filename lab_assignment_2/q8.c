#include <stdio.h>
#include <math.h>  
#include <string.h>

void brokenKey(char arr[]);
int main()
{
  char arra[100];
  scanf("%s",&arra);
  brokenKey(arra);
  return 0;
}

void brokenKey(char arr[]){
  printf("%c", arr[0]);
  for(int i = 1; i < strlen(arr); i++){
    if(i % 2 == 0){
      printf("%c", arr[i]);
    }
    else{
      printf("%c%c", arr[i],arr[i]);
    }
  }
}
