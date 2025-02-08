#include <stdio.h>
int main(){
    int N, second, minute, hour;
    scanf("%d", &N);

    hour = N / 3600;
    N -= hour * 3600;

    minute = N / 60;
    N -= minute * 60;

    second = N;

    printf("%d:%d:%d\n", hour, minute, second);

return 0;
}
