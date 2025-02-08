#include <stdio.h>
int main(){
    int X, Y, i, max, min, sum = 0;
    scanf("%d%d", &X, &Y);

    if (X > Y)
    {
        max = X;
        min = Y;
    }
    else
    {
        max = Y;
        min = X;
    }

    for(i=(min + 1); i<max; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
    }
    printf("%d\n", sum);

return 0;
}
