#include <stdio.h>
int main(){
    char t[27];
    int n, l;

    while(scanf("%s%d", t, &n) != EOF)
    {
        while (n--)
        {
            scanf("%d", &l);
            printf("%c", t[l-1]);
        }
        printf("\n");
    }


return 0;
}
