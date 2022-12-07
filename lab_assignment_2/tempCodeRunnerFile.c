#include <stdio.h>
#include <string.h>
void sortAgain(char a[], int size);
int main()
{
  char str[100];

  gets(str);
  int len = strlen(str);

  return 0;
}
void sortAgain(char a[], int size)
{
  char temp;
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < (size - 1); j++)
    {
      if (a[j] < a[j + 1])
      {
        temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }
  printf("%s\n", a);
  getch();
}