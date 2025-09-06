#include <stdio.h>

int main(){

    int mark[5], i = 0, total = 0, fail = 0;
    float average;
    while ( i < 5){
        printf("Enter mark: ");
        scanf("%d", &mark[i]);
        total = total + mark[i];

        if( mark[i] < 35){
            fail++;
        }
        i++;}
    average = total / 5.0;

    printf("Total Marks: %d\n", total);
    printf("Average Mark: %.2f\n", average);

    if ( fail >= 1){
        printf("Result: FAIL and NO GRADE\n");
    }
    else {

        printf("Result: Pass\n");
        if (average >= 80) {
            printf("Grade: O (Distinction)\n");
        } else if (average >= 60) {
            printf("Grade: A\n");
        } else if (average >= 41) {
            printf("Grade: B\n");
        } else {
            printf("Grade: C\n");
        }

    }
    return 0;
}

