#include <stdio.h>
int passByValue(int newValue);
int main()
{
  int value = 10;
  passByValue(value);

  printf("New Value : %d\n", value);

  return 0;
}
int passByValue(int newValue){
    return newValue + 10;
}

#include <stdio.h>
int passByReference(int* newValue);
int main()
{
  int value = 10;
  passByReference(&value);

  printf("New Value : %d\n", value);

  return 0;
}
int passByReference(int* newValue){
    return *newValue = 20;
}