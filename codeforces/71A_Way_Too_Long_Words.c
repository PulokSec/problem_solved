#include <stdio.h>
#include <string.h>
int main(){
  int n,s=0;
  char name[100];
  scanf("%d",&n);
  for(int i=0;i< n;i++){
    fgets(name,sizeof(name),stdin);
  if(i > 10){
    s = strlen(name)-3;
    printf("%c%d%c",name[0],s,name[s+2]);
  }
  else{
    puts(name);
  }
  }
  return 0;
}