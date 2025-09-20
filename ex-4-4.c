#include <stdio.h>

int main(){

    int i,j;
    int matrix[100][100];
    int row,col,zeros = 0;
    int even = 0, odd = 0;

    printf("Enter no of rows: ");
    scanf("%d", &row);
    printf("Enter no of cols: ");
    scanf("%d", &col);

    for( i = 0; i < row; i++){
        for ( j = 0; j < col; j++){
            printf("Enter a number: ");
            scanf("%d", &matrix[i][j]);
            if( matrix[i][j] == 0){
                zeros++;
            }
            else if ( matrix[i][j] % 2 == 0){
                even++;
            }
            else{
                odd++;
            }
        }
    }

    for( i = 0; i < row; i++){
        for ( j = 0; j < col; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("No of even numbers in the array: %d\n", even);
    printf("No of odd numbers in the array: %d\n", odd);
    printf("No of even zeros in the array: %d\n", zeros);

}


