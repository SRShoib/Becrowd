#include <stdio.h>

void printHo(int n);
int main(){
    int n;
    scanf("%d", &n);
    printHo(n);

return 0;
}
void printHo(int n)
{
    if (n == 0)
        return;
    if (n == 1)
        printf("Ho!\n");
    else
        printf("Ho ");
    return printHo(n-1);
}
