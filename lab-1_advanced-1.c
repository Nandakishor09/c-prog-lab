#include <stdio.h>

int variable_3();
int variable_2();
int main(){
    printf("Swapping using three variables: \n");
    variable_3();

    printf("Swapping using two variables: \n");
    variable_2();

}

int variable_3(){

    int a,b,c;
    a = 123;
    b = 124;
    printf("%d\n", a);
    printf("%d\n", b);
    c = b;
    b = a;
    a = c;
    printf("%d\n", a);
    printf("%d\n", b);
    return 0;
}

int variable_2(){

    int a,b;
    a = 14; b = 45;
    printf("%d\n", a);
    printf("%d\n", b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("%d\n", a);
    printf("%d", b);
    return 0;

}
