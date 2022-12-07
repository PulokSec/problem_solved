#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main(){
    char string1[20];
    int i,t,length;
    scanf("%d",&t);
    while(t != 0){
    int flag = 0;
    scanf("%s",string1);
    length = strlen(string1);
      for(i=0;i < length ;i++){
        if(string1[i] != string1[length-i-1]){
            flag = 1;
            break;
           }
    }
    if(flag == 1){
      printf("Case #1: Not Palindrome\n");
    }
    if (flag == 0 && length > 7) {
        printf("Case #3: ",t);
        printf("%c",string1[0]);
        printf("%d",length-2);
        printf("%c\n",string1[0]);
    }    
    else if(flag == 0 && length <= 7){
        printf("Case #2: ",t);
        printf("%s\n", string1);
    }
    t--;
        }
    
    return 0;
}