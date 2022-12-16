#include<stdio.h>
#include<stdbool.h>
void printCell(int a[][4],int n){
     for(int i = 1;i<=n;i++){
        for(int j =1;j<=3;j++){
            if(a[i][j]==-1) printf(" ");
            if(a[i][j]==1) printf("X");
            if(a[i][j]==2) printf("O");
            if(j<n) printf("\t|\t");
        }
        printf("\n");
        if(i<n) printf("_______________________________________");
        
        printf("\n\n");
    }
}
int main()
{
    int n=3;
    int a[4][4];
    for(int i = 1;i<=n;i++){
        for(int j =1;j<=3;j++){
           a[i][j]=-1;
        }
    }
    bool player1 = true;
    bool player2 = false;
    while(true){
        printCell(a,n);
        

        if(player1){
            int r,c;
            flag:
            printf("Player 1 term (X).Please Enter row and coloum:");
            scanf("%d%d",&r,&c);
            if(a[r][c]!=-1){
                printf("Invalid Input\n");
                goto flag;
            }
            a[r][c]=1;
            player1 = false;
            player2 = true;
        }
        else{
            int r,c;
            flag2:
            printf("Player 2 term (O).Please Enter row and coloum:");
            scanf("%d%d",&r,&c);
            if(a[r][c]!=-1){
                printf("Invalid Input\n");
                goto flag2;
            }
            a[r][c]=2;
            player1 = true;
            player2 = false;
        }
    }
   
}