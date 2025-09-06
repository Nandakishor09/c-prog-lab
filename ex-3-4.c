#include <stdio.h>

int main(){

    int num, sum, sumE, sumO;
    printf("Enter a number: ");
    scanf("%d", &num);

    sum = 0; sumE =0; sumO = 0;
    int i = 1;
    while ( i <= num){
        sum = sum + i;
        if ( i % 2 == 0){
            sumE = sumE + i;
        }
        else{
            sumO = sumO + i;
        }
        i++;
    }

    printf("Sum of natural numbers: %d\n", sum);
    printf("Sum of even numbers: %d\n", sumE);
    printf("Sum of odd numbers: %d", sumO);
    return 0;
}
