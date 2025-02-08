#include <stdio.h>
int main(){
    char o;
    int i, j;
    double m[12][12], sum = 0.0;
    scanf("%c", &o);

    for (i=0; i<12; i++)
    {
        for (j=0; j<12; j++)
        {
            scanf("%lf", &m[i][j]);
            if (i > j && (i + j) < 11)
                sum += m[i][j];
        }
    }
    if (o == 'S')
        printf("%.1lf\n", sum);
    else
        printf("%.1lf\n", sum/30.0);


return 0;
}






