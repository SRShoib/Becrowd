#include <stdio.h>
int main(){
    char L, i;
    int position = 0;
    scanf("%c", &L);

    if (L >= 'A' && L <= 'Z')
    {
        for (i='A'; i<=L; i++)
        {
            position++;
        }
        printf("%d\n", position);
    }
return 0;
}
