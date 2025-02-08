#include <stdio.h>
int main(){
    int i, j, l;
    double m[12][12], sum = 0.0;
    char t;

    scanf("%d %c", &l, &t);

    for (i=0; i<12; i++)
    {
        for (j=0; j<12; j++)
        {
            scanf("%lf", &m[i][j]);
            if (j == l)
                sum += m[i][j];
        }
    }
    if (t == 'S')
        printf("%.1lf\n", sum);
    else
        printf("%.1lf\n", sum/12);

return 0;
}

