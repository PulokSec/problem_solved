#include <stdio.h>
double fact(int a);
void ratio(int a, int b);
int main()
{
  int a, b;
  scanf("%d %d",&a,&b);
  ratio(a,b);
  return 0;
}
void ratio(int a, int b){
  if(fact(a) > fact(b)){
  printf("%lf\n",(fact(a)/fact(b)));
  }
  else{
  printf("%lf\n",(fact(b)/fact(a)));
  }
  return;
}

double fact(int a){
  double res = 1;
  for(int i=1; i<=a; i++){
    res *= i;
  }
  return res;
}