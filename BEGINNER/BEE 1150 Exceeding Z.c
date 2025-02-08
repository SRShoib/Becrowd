#include <stdio.h>
int main(){
    int X, Z, i, n = 0, sum = 0;
    scanf("%d", &X);
    while (Z <= X)
    {
        scanf("%d", &Z);
    }
    for (i=X; sum<=Z; i++)
    {
        sum += i;
        n += i / i;
    }
    printf("%d\n", n);
return 0;
}
