#include <stdio.h>
#include <string.h>
int main(){
    int i, n;
    float t;
    char g[10001];
    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        scanf("%s", g);
        int l = strlen(g);
        t = l * .01;
        printf("%.2f\n", t);

    }


return 0;
}
