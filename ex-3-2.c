#include <stdio.h>

int main(){

    int units, bill;
    printf("Enter the units: ");
    scanf("%d", &units);

    if ( units <= 100){
        bill = units * 5;
    }
    else if ( units >= 101 && units <= 300){
        bill = 100 * 5 + ( units - 100) * 7;
    }
    else{
        bill = 100 * 5 + 200 * 7 + ( units - 300) * 10;
    }

    printf("Total bill amount: %d", bill);
    return 0;
}
