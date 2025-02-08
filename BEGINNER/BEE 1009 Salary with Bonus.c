#include<stdio.h>
int main(){
    char name;
    double fixed_salary, sale, percent, total;
    scanf("%s %lf %lf", &name, &fixed_salary, &sale);

    percent = (sale * 0.15);
    total = (percent + fixed_salary);

    printf("TOTAL = R$ %.2lf\n", total);
return 0;
}
