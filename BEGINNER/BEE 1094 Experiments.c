#include <stdio.h>
int main(){
    int N, Amount, total_n = 0, rabbit =0, rat = 0, frog =0, i;
    char Type;
    double percent_c, percent_r, percent_s;
    scanf("%d", &N);

    for (i=1; i<=N; i++)
    {
        scanf("%d %c", &Amount, &Type);

        total_n += Amount;

        if (Type == 'C')
        {
            rabbit += Amount;
        }
        if (Type == 'R')
        {
            rat += Amount;
        }
        if (Type == 'S')
        {
            frog += Amount;
        }
    }

    percent_c = (rabbit / (float)total_n) * 100;
    percent_r = (rat / (float)total_n) * 100;
    percent_s = (frog / (float)total_n) * 100;

    printf("Total: %d cobaias\n", total_n);
    printf("Total de coelhos: %d\n", rabbit);
    printf("Total de ratos: %d\n", rat);
    printf("Total de sapos: %d\n", frog);
    printf("Percentual de coelhos: %.2lf %%\n", percent_c);
    printf("Percentual de ratos: %.2lf %%\n", percent_r);
    printf("Percentual de sapos: %.2lf %%\n", percent_s);
return 0;
}
