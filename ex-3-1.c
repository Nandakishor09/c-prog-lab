#include <stdio.h>

int main(){

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if ( num == 0)
        printf("Enter number is 0");
    else if ( num % 2 == 0)
        printf("Enter number is a even number");
    else
        printf("Enter number is a odd number");

    return 0;
}
