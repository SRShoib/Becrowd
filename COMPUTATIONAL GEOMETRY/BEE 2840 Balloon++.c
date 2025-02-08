#include <stdio.h>
#define PI 3.1415
int main(){
    long long int r, l, v;

    scanf("%d%d", &r, &l);
    v = (4 * PI * r * r * r) / 3;
    printf("%d\n", l / v);



return 0;
}
