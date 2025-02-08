#include <stdio.h>
#include <math.h>
int main(){
    int n, h, c, l;
    while (scanf("%d%d%d%d", &n, &h, &c, &l) != EOF)
    {
        double a = n * sqrt(h * h + c * c);
        printf("%.4lf\n", (a * l) / (100.0 * 100.0));
    }


return 0;
}
