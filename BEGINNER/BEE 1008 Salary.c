#include<stdio.h>
int main(){
    int n, wh;
    float amount, salary;
    scanf("%d %d %f", &n, &wh, &amount);

    salary = (wh * amount);

    printf("NUMBER = %d\n", n);
    printf("SALARY = U$ %.2f\n", salary);
return 0;
}
