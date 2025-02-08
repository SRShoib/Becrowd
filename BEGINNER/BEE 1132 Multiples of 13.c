#include <stdio.h>
int main(){
    int i, x, y, temp, sum = 0;
    scanf("%d%d", &x, &y);

    if (x > y)
    {
        x = x;
        y = y;
    }
    else
    {
        temp = x;
        x = y;
        y = temp;
    }
    for (i=y; i<=x; i++)
    {
        if ((i % 13) != 0)
        {
            sum += i;
        }
    }
    printf("%d\n", sum);

return 0;
}
