#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, s, b, a, s1, b1, a1;
    string st;
    cin >> n;
    int s_sum, b_sum, a_sum, s1_sum, b1_sum, a1_sum;
        s_sum = b_sum = a_sum = s1_sum = b1_sum = a1_sum = 0;

    while (n--)
    {
        
        cin >> st >> s >> b >> a >> s1 >> b1 >> a1;
        s_sum += s; b_sum += b; a_sum += a;
        s1_sum += s1; b1_sum += b1; a1_sum += a1;
    }
    printf("Pontos de Saque: %.2lf %%.\n", (s1_sum * 100) / (s_sum * 1.0));
    printf("Pontos de Bloqueio: %.2lf %%.\n", (b1_sum * 100) / (b_sum * 1.0));
    printf("Pontos de Ataque: %.2lf %%.\n", (a1_sum * 100) / (a_sum * 1.0));

    return 0;
}