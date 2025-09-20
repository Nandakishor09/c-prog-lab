#include <stdio.h>

int main(){

    int i,j;
    int matrix[100][100];
    int row,col;

    printf("Enter no of rows: ");
    scanf("%d", &row);
    printf("Enter no of cols: ");
    scanf("%d", &col);

    for( i = 0; i < row; i++){
        for ( j = 0; j < col; j++){
            printf("Enter a number: ");
            scanf("%d", &matrix[i][j]);
        }
    }

    for( i = 0; i < row; i++){
        for ( j = 0; j < col; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }



}
