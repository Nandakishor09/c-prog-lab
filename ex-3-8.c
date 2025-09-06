#include <stdio.h>

int main(){

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int i = 2, count = 0;
    while ( i <= num/2){
        if ( num % i == 0){
            count++;
        }
        i++;
    }
    if ( count == 0)
        printf("Prime number");
    else
        printf("Not a Prime number");
    return 0;
}
