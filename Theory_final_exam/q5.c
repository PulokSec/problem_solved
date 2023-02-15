#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *arr, size;
  printf("Enter the array size: \n");
  scanf("%d", &size);
  arr = (int *)malloc(size * sizeof(int));
  printf("Enter the value of the array: \n");
  for (int i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("The new array is: ");
  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
  return 0;
}
