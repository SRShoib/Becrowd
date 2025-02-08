#include <stdio.h>
#include <math.h>
int main(){
    double num, media = 0;
    int x, i=0;

    while (1)
    {
        scanf("%lf", &num);

        if (num >=0 && num <= 10)
        {
            i += 1;
            media += num / 2;
             if (i%2 == 0)
            {
                printf("media = %.2lf\n", media);
                media = 0;


                while (1)
                {
                    scanf("%d", &x);
                    if (x == 2 || x == 1)
                    {
                        printf("novo calculo (1-sim 2-nao)\n");
                        break;
                    }
                    else
                        printf("novo calculo (1-sim 2-nao)\n");
                }
                if(x == 2)
                    break;
                else if (x == 1)
                    continue;
            }
        }
        else
            printf("nota invalida\n");
    }


return 0;
}
