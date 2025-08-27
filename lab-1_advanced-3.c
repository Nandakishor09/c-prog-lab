#include <stdio.h>
int main(){

    int a, b, c,d;

    printf("This is the mathematical expression --- (a+b) * c - d");
    printf("\nEnter variables a, b, c and d: \n");

    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    float exp = (a+ b) * c - d;
    printf("Result: %.4f", exp);
    return 0;
}


