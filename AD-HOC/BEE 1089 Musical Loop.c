#include <stdio.h>
int main(){
    int i, n;

    while(1)
    {
        scanf("%d", &n);
        if (n == 0)
            break;
        int h[n];
        int count = 0;

        for (i=0; i<n; i++)
        {
            scanf("%d", &h[i]);
        }
        for (i=0; i<n; i++)
        {
            if (i == 0)
            {
                if ((h[i] > h[n-1] && h[i] > h[i+1]) || (h[i] < h[n-1] && h[i] < h[i+1]))
                    count++;
            }
            else if (i == (n-1))
            {
                if ((h[i] > h[0] && h[i] > h[i-1]) || (h[i] < h[0] && h[i] < h[i-1]))
                    count++;
            }
            else if ((h[i] > h[i-1] && h[i] > h[i+1]) || (h[i] < h[i-1] && h[i] < h[i+1]))
                count++;
        }
        printf("%d\n", count);

    }
return 0;
}
