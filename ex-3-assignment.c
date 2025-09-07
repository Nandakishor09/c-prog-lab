#include <stdio.h>

int main(){

    int num;
    printf("Enter number of employees to calculated: ");
    scanf("%d", &num);

    int i = 1;
    float basic, da, hra, tax, net_salary;

    while ( i <= num){
        printf("Enter basic salary: ");
        scanf("%f", &basic);

        da = 0.1 * basic;
        hra = 0.2 * basic;
        tax = 0.05 * ( basic + da + hra);

        net_salary = ( basic + da + hra) - tax;

        printf("DA (10%): %.2f\n", da);
        printf("HRA (20%): %.2f\n", hra);
        printf("TAX (5%): %.2f\n", tax);
        printf("Net salary: %.2f", net_salary);
        i++;
    }
    return 0;

}
