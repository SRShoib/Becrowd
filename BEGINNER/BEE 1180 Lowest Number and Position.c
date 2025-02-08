#include <stdio.h>
int main(){
    int i, n, min, position;
    scanf("%d", &n);
    int x[n];

    for (i=0; i<n; i++)
    {
        scanf("%d", &x[i]);
        if (i == 0)
        {
            min = x[0];
            position = i;
        }
        else
        {
            if (x[i] < min)
                {
                    min = x[i];
                    position = i;
                }

        }

    }
    printf("Menor valor: %d\n", min);
    printf("Posicao: %d\n", position);

return 0;
}
