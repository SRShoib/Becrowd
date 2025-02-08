#include <stdio.h>
int main(){
    int x, y, i, count = 0;
    scanf("%d%d", &x, &y);

    if (x < y)
    {
        for (i=1; i<=y; i++)
        {
            printf("%d", i);
            count++;
            if (count % x == 0)
            {
                printf("\n", i);
            }
            else
                printf(" ");

        }
    }
return 0;
}
