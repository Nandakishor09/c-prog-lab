#include <stdio.h>

int main(){

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if ( num == 0)
        printf("Entered number is 0");
    else if ( num % 2 == 0)
        printf("Entered number is a even number");
    else
        printf("Entered number is a odd number");

    return 0;
}


