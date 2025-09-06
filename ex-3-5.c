#include <stdio.h>

int main(){

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int i = 1, fact = 1;
    do{
        fact  = fact * i;
        i++;
    }
    while ( i <= num);

    printf("Factorial of %d is %d", num, fact);
    return 0;
}
