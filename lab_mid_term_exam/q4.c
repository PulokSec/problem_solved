#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int row, column;
  scanf("%d%d",&row,&column);
  int m[row][column];

  for (int i = 0;i < row;i++)
  {
    for (int j = 0;j < column;j++)
    {
      scanf("%d",&m[i][j]);
    }
  }

  for (int i = 0;i < row;i++)
  {
    for (int j = 0;j < column;j++)
    {
      if (m[i][j] == (i + 1) && m[i][j] == (j + 1))
      {
        m[i][j] += 3;
      }
      else if (m[i][j] == (i + 1) && m[i][j] != (j + 1))
      {
        m[i][j] += 2;
      }
      else if (m[i][j] != (i + 1) && m[i][j] == (j + 1))
      {
        m[i][j] += 1;
      }
    }
  }

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < column; j++)
    {
      printf("%d ", m[i][j]);
    }
    printf("\n");
  }
  return 0;
}
