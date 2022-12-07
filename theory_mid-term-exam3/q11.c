#include<stdio.h>
 
int main() {
   int length = 3;
   int matrix[3][3];
   int row, column = 0;
   int sum, sum1, sum2;
   int temp = 0;
   for (row = 0; row < length; row++) {
      for (column = 0; column < length; column++)
         scanf("%d", &matrix[row][column]);
   }

   sum = 0;
   for (row = 0; row < length; row++) {
      for (column = 0; column < length; column++) {
         if (row == column)
            sum = sum + matrix[row][column];
      }
   }

   for (row = 0; row < length; row++) {
      sum1 = 0;
      for (column = 0; column < length; column++) {
         sum1 = sum1 + matrix[row][column];
      }
      if (sum == sum1)
         temp = 1;
      else {
         temp = 0;
         break;
      }
   }
 
   for (row = 0; row < length; row++) {
      sum2 = 0;
      for (column = 0; column < length; column++) {
         sum2 = sum2 + matrix[column][row];
      }
      if (sum == sum2)
         temp = 1;
      else {
         temp = 0;
         break;
      }
   }
 
   if (temp == 1)
      printf("YES\n");
   else
      printf("NO\n");
 
   return 0;
}