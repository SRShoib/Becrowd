#include <stdio.h>
#include <string.h>
int main(){
    int n;
    char t[101];
    scanf("%d", &n);
    getchar();//because read first integer then character.for space use getchar()
    while (n--)
    {
        gets(t);

        int l = strlen(t);
        for (int i=(l/2)-1; i>=0; i--)
            printf("%c", t[i]);
        for (int i=l-1; i>=l/2; i--)
            printf("%c", t[i]);
        printf("\n");
    }



return 0;
}
