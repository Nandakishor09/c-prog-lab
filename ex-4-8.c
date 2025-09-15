#include <stdio.h>

int main(){

    int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

    int i = 0, j = 0;

    for(i =0; i < 3; i++){
        for(j =0; j < 3; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    int k, c;
    int new[3][3];

    for(i =0; i < 3; i++){
        for(j =0; j < 3; j++){
                if ( i == j)
                    new[i][j] = arr[i][j];
                else
                    new[j][i] = arr[i][j];
        }

    }
    printf("\n");

    for(i =0; i < 3; i++){
        for(j =0; j < 3; j++){
            printf("%d ", new[i][j]);
        }
        printf("\n");
    }
    return 0;
}
