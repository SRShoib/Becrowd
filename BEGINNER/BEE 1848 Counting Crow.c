#include <stdio.h>
int main(){
    char t[10];
    int sum = 0, i= 0;
    while (1)
    {
        gets(t);
        if (t[0] == 'c' && t[1] == 'a' && t[2] == 'w' && t[3] == ' ' && t[4] == 'c' && t[5] == 'a' && t[6] == 'w')
        {
            printf("%d\n", sum);
            sum = 0;
            i++;
            if (i == 3)
                break;
        }
        else if (t[0] == '-' && t[1] == '-' && t[2] == '*')
            sum++;
        else if (t[0] == '*' && t[1] == '-' && t[2] == '-')
            sum += 4;
    }

return 0;
}
