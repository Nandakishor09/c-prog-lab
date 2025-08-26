#include <stdio.h>

int main(){

    int sub1, sub2, sub3, sub4, sub5, total;


    printf("Enter mark: ");
    scanf("%d", &sub1);

    printf("Enter mark: ");
    scanf("%d", &sub2);

    printf("Enter mark: ");
    scanf("%d", &sub3);

    printf("Enter mark: ");
    scanf("%d", &sub4);

    printf("Enter mark: ");
    scanf("%d", &sub5);

    total = sub1 + sub2 + sub3 + sub4 + sub5;
    float percent = ((float)total / 500) * 100;

    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f", percent);

    return 0;
}
