#include <stdio.h>
#include <string.h>
int main()
{
  int number;
  scanf("%d", &number);

  char* result(int a)
  {
    char* temp;
    if(a >= 80 && a <= 100)
     temp = "A";
     else if(a >= 60 && a <= 79)
     temp = "B";
     else if(a >= 40 && a <= 59)
     temp = "C";
     else
     temp = "F";

     return temp;
  }
    printf("%s\n",result(number));


  return 0;
}
