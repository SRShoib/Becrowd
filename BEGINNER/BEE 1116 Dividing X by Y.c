#include <stdio.h>
int main(){
    int N, X, Y, i;
    float d;
    scanf("%d", &N);

    for (i=1; i<=N; i++)
    {
        scanf("%d%d", &X, &Y);

        if (Y == 0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            d = X / (float)Y;
            printf("%.1f\n", d);
        }
    }
return 0;
}
