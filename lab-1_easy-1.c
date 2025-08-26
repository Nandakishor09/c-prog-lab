#include <stdio.h>

int main(){

    int age; char name[50];
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your name: ");
    scanf("%s", &name);

    printf("%d\n", age);
    printf("%s", name);
    return 0;
}
