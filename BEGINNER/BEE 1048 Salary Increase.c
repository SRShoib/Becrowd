#include <stdio.h>
int main(){
    float salary, readjustment;
    scanf("%f", &salary);

    if (salary >= 0 && salary <= 400)
    {
        readjustment = salary * .15;
        salary += readjustment;
        printf("Novo salario: %.2f\n", salary);
        printf("Reajuste ganho: %.2f\n", readjustment);
        printf("Em percentual: 15 %%\n");
    }
    else if (salary > 400 && salary <= 800)
    {
        readjustment = salary * .12;
        salary += readjustment;
        printf("Novo salario: %.2f\n", salary);
        printf("Reajuste ganho: %.2f\n", readjustment);
        printf("Em percentual: 12 %%\n");

    }
    else if (salary > 800 && salary <= 1200)
    {
        readjustment = salary * .1;
        salary += readjustment;
        printf("Novo salario: %.2f\n", salary);
        printf("Reajuste ganho: %.2f\n", readjustment);
        printf("Em percentual: 10 %%\n");

    }
    else if (salary > 1200 && salary <= 2000)
    {
        readjustment = salary * .07;
        salary += readjustment;
        printf("Novo salario: %.2f\n", salary);
        printf("Reajuste ganho: %.2f\n", readjustment);
        printf("Em percentual: 7 %%\n");

    }
    else if (salary > 2000)
    {
        readjustment = salary * .04;
        salary += readjustment;
        printf("Novo salario: %.2f\n", salary);
        printf("Reajuste ganho: %.2f\n", readjustment);
        printf("Em percentual: 4 %%\n");

    }

return 0;
}
