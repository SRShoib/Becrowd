#include <stdio.h>
int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if (a + b > c &&  b + c > a && c + a > b)
    {
        if (a == b && a == c)
            printf("Valido-Equilatero\n");
        else if ((a == b && a != c) || (b == c && b != a) || (a == c && a != b))
            printf("Valido-Isoceles\n");
        else if (a != b && a != c && b != c)
            printf("Valido-Escaleno\n");
        if (a*a == (b*b + c*c) || b*b == (a*a + c*c) || c*c == (b*b + a*a))
            printf("Retangulo: S\n");
        else
            printf("Retangulo: N\n");
    }
    else
        printf("Invalido\n");


return 0;
}
