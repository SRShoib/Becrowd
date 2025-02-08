#include <stdio.h>
int main(){
    int n;
    float x;
    scanf("%d", &n);

    while (n--)
    {
        scanf("%f", &x);
        int d = 0;
        while (x > 1)
        {
            x /= 2;
            d++;
        }
        printf("%d dias\n", d);
    }


return 0;
}
