#include <stdio.h>
int main(){
    int i;
    char name[31];

    for (i=1; i<=10; i++)
    {
        scanf("%s", name);
        if (i == 3 || i == 7 || i == 9)
            puts(name);
    }
return 0;
}
