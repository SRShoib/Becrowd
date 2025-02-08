#include<stdio.h>
#include<string.h>
int main()
{
    char t[100];
    int i,j,l;
    while(gets(t) != NULL)
    {
        j = 0;
        l = strlen(t);
        for(i = 0; i<l; i++)
        {
            if(t[i] == ' ')
                continue;
                j++;

                if(t[i] > 96 && j%2 == 1)
                    t[i] -= 32;
                else if(t[i] < 96 && j%2 == 0)
                    t[i] += 32;
        }
        t[l]='\0';
        printf("%s\n", t);
    }
    return 0;
}
