#include <stdio.h>
int main(){
    int n, s, count = 0;
    scanf("%d", &n);

    for (int i=1; i<=n; i++)
    {
        scanf("%d", &s);
        count += s - (s % 3);
    }
    printf("%d\n", count);


return 0;
}
