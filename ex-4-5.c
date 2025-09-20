#include <stdio.h>

int main(){

    int i,j;
    int matrix[100][100];
    int matrix2[100][100];
    int add[100][100];
    int row,col;

    printf("Enter no of row(both matrix): ");
    scanf("%d", &row);
    printf("Enter no of cols(both matrix): ");
    scanf("%d", &col);

    printf("\nMatrix 1\n");
    for( i = 0; i < row; i++){
        for ( j = 0; j < col; j++){
            printf("Enter a number: ");
            scanf("%d", &matrix[i][j]);
        }
    }//reads matrix1

    printf("\nMatrix 2\n");
    for( i = 0; i < row; i++){
        for ( j = 0; j < col; j++){
            printf("Enter a number: ");
            scanf("%d", &matrix2[i][j]);
        }
    }//reads matrix2

    printf("\nMatrix 1\n");
    for( i = 0; i < row; i++){
        for ( j = 0; j < col; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }//prints matrix1

    printf("\nMatrix 2\n");
    for( i = 0; i < row; i++){
        for ( j = 0; j < col; j++){
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }//prints matrix2

    printf("\nMatrix 1 + Matrix 2\n");

     for( i = 0; i < row; i++){
        for ( j = 0; j < col; j++){
            add[i][j] = matrix[i][j] + matrix2[i][j];
            printf("%d ", add[i][j]);
        }
        printf("\n");

    }//adds matrix1 and 2 and prints it

    return 0;

}
