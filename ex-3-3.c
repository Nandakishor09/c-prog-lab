#include <stdio.h>

int main(){

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int i = 1;
    for ( i; i <= num; i++){
        printf("%d ", i);
    }
    return 0;

}
