#include <stdio.h>
int main(){
    int i, x;

    while (1)
    {
        scanf("%d", &x);
        if (x == 0)
            break;
        for (i=1; i<=x; i++)
        {
            if (i == x)
                printf("%d\n", i);
            else
                printf("%d ", i);
        }
    }

return 0;
}
