#include <stdio.h>
#include <string.h>
int main(){
    char s[51];
    int i, l, p;

    while (1)
    {
        gets(s);
        if (s[0] == '*')
            break;
        p = 1;
        l = strlen(s);
        for (i=0; i<l; i++)
        {
            if (s[i-1] == ' ' && s[i] != s[0] && i>0 && s[i] != s[0] + 32 && s[i] != s[0] - 32)
            {
                printf("N\n");
                p = 0;
                break;
            }
        }
        if (p == 1)
        printf("Y\n");

    }
return 0;
}
