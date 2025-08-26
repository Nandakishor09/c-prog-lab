#include <stdio.h>


int main() {

    int x, y;

    char choice;

    printf("Enter the Operator (+,-,*,/): ");
    scanf(" %c", &choice);

    printf("Enter number: ");
    scanf("%d", &x);

    printf("Enter number: ");
    scanf("%d", &y);


    if ( choice == '+'){
        printf("%d + %d = %d\n", x, y, x + y);
    }

    else if ( choice == '-'){
        printf("%d - %d = %d\n", x, y, x - y);
    }

    else if( choice == '*'){
        printf("%d * %d = %d\n", x, y, x *y);
    }

    else if( choice == '/'){
        printf("%d / %d = %d", x, y, x / y);
    }

    else{
        printf("Invalid Operator Input\n");
    }

    return 0;
}
