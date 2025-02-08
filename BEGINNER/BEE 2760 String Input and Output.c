#include <stdio.h>
int main(){
    char a[100], b[100], c[100];

    fgets(a, 100, stdin);
    fgets(b, 100, stdin);
    fgets(c, 100, stdin);

    printf("%s%s%s\n", a, b, c);
    printf("%s%s%s\n", b, c, a);
    printf("%s%s%s\n", c, a, b);
    printf("%.10s%.10s%.10s\n", a, b, c);


return 0;
}
