#include <stdio.h>
int main(){
    int i;
    long long int a;
    char s[100];
    scanf("%llu", &a);

    for ( i=0; a!=0; i++)
    {
        s[i] = (a % 10) + 48;
        a /= 10;
    }
    s[i] = '\0';
    puts(s);



return 0;
}
