#include <stdio.h>
int main(){
    int X, Y;
    double value;

    scanf("%d%d", &X, &Y);
    switch (X)
    {
    case 1:
        value = Y * 4.00;
        break;
    case 2:
        value = Y * 4.50;
        break;
    case 3:
        value = Y * 5.00;
        break;
    case 4:
        value = Y * 2.00;
        break;
    case 5:
        value = Y * 1.50;
        break;

    }
    printf("Total: R$ %.2lf\n", value);
return 0;
}
