#include <stdio.h>
int main(){
    int i, t, j, n, m, temp[90000];
    while (1)
    {

        scanf("%d%d", &n, &m);
        if (n == 0 && m == 0)
            break;
        int count = 0;
        for(i=0; i<m; i++)
        {
            scanf("%d", &t);
                if (t > n)
                    break;
                temp[t]++;
                if (temp[t] == 2)
                    count++;
        }
        printf("%d\n", count);


    }

return 0;
}
