#include <stdio.h>
int main(){
    int c1, c2, b1, b2, p1, p2, count = 0;
    scanf("%d%d%d", &c1, &b1, &p1);
    scanf("%d%d%d", &c2, &b2, &p2);
    if (c2 > c1)
        count += c2 - c1;
    if (b2 > b1)
        count += b2 - b1;
    if (p2 > p1)
        count += p2 - p1;
    printf("%d\n", count);

return 0;
}
