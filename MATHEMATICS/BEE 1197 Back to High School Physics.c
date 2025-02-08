#include <stdio.h>
int main(){
    int v, t;

    while  (scanf("%d%d", &v, &t) != EOF)
    {
        printf("%ld\n", 2 * v * t);
    }
return 0;
}
