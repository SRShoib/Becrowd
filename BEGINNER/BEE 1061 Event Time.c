#include <stdio.h>
int main(){
    int d1, d2, h1, h2, m1, m2, s1, s2;
    scanf("Dia %d", &d1);
    scanf("%2d : %2d : %2d\n", &h1, &m1, &s1);
    scanf("Dia %d", &d2);
    scanf("%2d : %2d : %2d", &h2, &m2, &s2);
    int sm1, sm2, sum;
    sm1 = s1 + (m1*60) + (h1*60*60) + (d1*24*60*60);
    sm2 = s2 + (m2*60) + (h2*60*60) + (d2*24*60*60);
    sum = (sm2 - sm1);

    printf("%d dia(s)\n", sum / 86400);
    sum %= 86400;

    printf("%d hora(s)\n", sum / 3600);
    sum %= 3600;

    printf("%d minuto(s)\n", sum / 60);
    sum %= 60;

    printf("%d segundo(s)\n", sum);

return 0;
}
