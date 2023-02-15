#include<stdio.h>
#include<stdbool.h>
void printGrid(int a[][4],int n);
int main()
{
    int n =3;
    int a[4][4];
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            a[i][j] = -1;
        }
    }
    while(true){
        printGrid(a,n);
        bool player1 = true;
        bool player2 = false;
        if(player1 == true){
        printf("Player 1 (x), Enter row and column: ");
        int row,col;
        scanf("%d %d",&row,&col);
        if(a[row][col] == -1){
          a[row][col] = 1;
        }
        player1= false;
        player2= true;
    }
    else{
        printf("Player 2 (o), Enter row and column: ");
        int row,col;
        scanf("%d %d",&row,&col);
        if(a[row][col] == -1){
          a[row][col] = 2;
        }
        player1= true;
        player2= false;
        }
    }
    return 0;
}
void printGrid(int a[][4],int n){
for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
          if(a[i][j] == -1) printf(" ");
          if(a[i][j] == 1) printf("x");
          if(a[i][j] == 2) printf("o");
          if(j<n) printf("\t|");
        }
        printf("\n");
        if(i<n) printf("-----------------------");
        printf("\n");
    }
}