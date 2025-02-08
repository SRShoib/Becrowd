#include <stdio.h>
int main(){
    int i, t;
    float ti, min = 0;

    while (scanf("%d", &t) != EOF)
    {
        for (i=1; i<=t; i++)
        {
            scanf("%f", &ti);
            if (i == 1)
                min = ti;
            else
            {
                if (min > ti)
                    min = ti;
            }
        }
        printf("%.2f\n", min);
    }


return 0;
}
