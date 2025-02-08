#include <stdio.h>
#include <string.h>
int main(){
    int t, n, sum = 0;
    char s[50];

    while (1)
    {
        scanf("%d", &t);
        if (t == 0)
            break;
        while (t--)
        {
            scanf("%d", &n);
            getchar();
            gets(s);
            if (!strcmp(s, "suco de laranja")) sum += n * 120;
            else if (!strcmp(s, "morango fresco")) sum += n * 85;
            else if (!strcmp(s, "mamao")) sum += n * 85;
            else if (!strcmp(s, "goiaba vermelha")) sum += n * 70;
            else if (!strcmp(s, "manga")) sum += n * 56;
            else if (!strcmp(s, "laranja")) sum += n * 50;
            else if (!strcmp(s, "brocolis")) sum += n * 34;
        }
        if (sum >= 110 && sum <= 130)
            printf("%d mg\n", sum);
        else if (sum > 130)
            printf("Menos %d mg\n", sum - 130);
        else
            printf("Mais %d mg\n", 110 - sum);
        sum = 0;
    }



return 0;
}
