#include <stdio.h>
#define MAX_SIZE 1000
int main(){
    unsigned long long num[MAX_SIZE], highest;
    int i, position;

    for (i=1; i<=100; i++)
    {
        scanf("%llu", &num[i]);

        if (i == 1)
            highest = num[1];
        else if (num[i] > highest)
            {
                highest = num[i];
                position = i;
            }
    }
    printf("%llu\n", highest);
    printf("%d\n", position);
return 0;
}
