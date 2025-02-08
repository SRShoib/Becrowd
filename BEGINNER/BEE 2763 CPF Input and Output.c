#include <stdio.h>
int main(){
    int x, y, z, d;
    scanf("%3d.%3d.%3d-%2d", &x, &y, &z, &d);
    printf("%03d\n%03d\n%03d\n%02d\n", x, y, z, d);

return 0;
}
