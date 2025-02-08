#include <stdio.h>
int main(){
    double N;
    int note_100, note_50, note_20, note_10, note_5, note_2, coin_1, coin_05, coin_025, coin_010, coin_005, coin_001;
    note_100 = note_50 = note_20 = note_10 = note_5 = note_2 = 0;
    coin_1 = coin_05 = coin_025 = coin_010 = coin_005 = coin_001 = 0;

    scanf("%lf", &N);

    if (N >= 100)
    {
        note_100 = N / 100;
        N -= note_100 * 100;
    }
    if (N >= 50)
    {
        note_50 = N / 50;
        N -= note_50 * 50;
    }
    if (N >= 20)
    {
        note_20 = N / 20;
        N -= note_20 * 20;
    }
        if (N >= 10)
    {
        note_10 = N / 10;
        N -= note_10 * 10;
    }
    if (N >= 5)
    {
        note_5 = N / 5;
        N -= note_5 * 5;
    }
    if (N >= 2)
    {
        note_2 = N / 2;
        N -= note_2 * 2;
    }

    if (N >= 1)
    {
        coin_1 = N / 1;
        N -= coin_1 * 1;
    }
    if (N >= 0.50)
    {
        coin_05 = N / 0.50;
        N -= coin_05 * 0.50;
    }
    if (N >= 0.25)
    {
        coin_025 = N / 0.25;
        N -= coin_025 * 0.25;
    }
    if (N >= 0.10)
    {
        coin_010 = N / 0.10;
        N -= coin_010 * 0.10;
    }
    if (N >= 0.05)
    {
        coin_005 = N / 0.05;
        N -= coin_005 * 0.05;
    }
    if (N >= 0.01)
    {
        coin_001 = N / 0.01;
    }

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", note_100);
    printf("%d nota(s) de R$ 50.00\n", note_50);
    printf("%d nota(s) de R$ 20.00\n", note_20);
    printf("%d nota(s) de R$ 10.00\n", note_10);
    printf("%d nota(s) de R$ 5.00\n", note_5);
    printf("%d nota(s) de R$ 2.00\n", note_2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", coin_1);
    printf("%d moeda(s) de R$ 0.50\n", coin_05);
    printf("%d moeda(s) de R$ 0.25\n", coin_025);
    printf("%d moeda(s) de R$ 0.10\n", coin_010);
    printf("%d moeda(s) de R$ 0.05\n", coin_005);
    printf("%d moeda(s) de R$ 0.01\n", coin_001);

return 0;
}
