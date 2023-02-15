#include <stdio.h>

int main()
{
  int n, m, row, col;
  scanf("%d %d", &n, &m);
  printf("\n");
  int first_mat[n][n];
  int second_mat[n][n];
  int result_mat[n][n];

  for (row = 0; row < n; row++)
  {
    for (col = 0; col < n; col++)
    {
      scanf("%d", &first_mat[row][col]);
    }
  }
  printf("\n");
  for (row = 0; row < n; row++)
  {
    for (col = 0; col < n; col++)
    {
      scanf("%d", &second_mat[row][col]);
    }
  }
  printf("\n");
  for (row = 0; row < n; row++)
  {
    for (col = 0; col < n; col++)
    {
      result_mat[row][col] = first_mat[row][col] + second_mat[row][col];
    }
  }
  for (row = 0; row < n; row++)
  {
    for (col = 0; col < n; col++)
    {
      printf("%d ", result_mat[row][col]);
    }
    printf("\n");
  }

  return 0;
}