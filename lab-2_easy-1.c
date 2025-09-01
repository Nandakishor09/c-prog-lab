#include <stdio.h>

int main(){

    auto int a = 22;
    printf("%d\n", a);
    a = a+8;
    printf("%d\n", a);

    register int b = 20;
    printf("%d", b);
    //printf("%p", &b);// this show an error
    return 0;
}
