#include <stdio.h>
#include <math.h>
int main(){
    double A, B, C, r1, r2, d;
    scanf("%lf%lf%lf", &A, &B, &C);

    if (A == 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        d = (B * B) - (4 * A * C);

        if (d > 0)
        {
            r1 = (-B + sqrt(d)) / (2 * A);
            r2 = (-B - sqrt(d)) / (2 * A);
            printf("R1 = %.5lf\n", r1);
            printf("R2 = %.5lf\n", r2);
        }
        else if (d == 0)
        {
            r1 = r2 = -B / (2 * A);
            printf("R1 = %.5lf\n", r1);
            printf("R2 = %.5lf\n", r2);
        }
        else if (d < 0)
        {
            printf("Impossivel calcular\n");
        }


    }


return 0;
}
