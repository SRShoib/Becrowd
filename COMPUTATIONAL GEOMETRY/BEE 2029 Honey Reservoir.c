#include <stdio.h>
#define PI 3.14
int main(){
    double v, d;

    while (scanf("%lf%lf", &v, &d) != EOF)
    {
        printf("ALTURA = %.2lf\n", v / (PI * (d/2) * (d/2)));
        printf("AREA = %.2lf\n", PI * (d/2) * (d/2));
    }


return 0;
}
