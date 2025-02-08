#include <stdio.h>
int main(){
    char nm[100];
    int i, n, f;

    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        scanf("%s%d", nm, &f);
        if (nm[0] == 'T' && nm[1] == 'h' && nm[2] == 'o' && nm[3] == 'r')
            printf("Y\n");
        else
            printf("N\n");
    }

return 0;
}
