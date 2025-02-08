#include<stdio.h>
#include<math.h>
int main(){
    int a, b, c, e, d;
    scanf("%d %d %d %d", &a, &b, &c, &e);

    d = (a+b+abs(a-b))/2; //Here 'abs' is like (modulas) || (only positive)
    d = (d+c+abs(d-c))/2;
    d = (d+e+abs(d-e))/2;
    printf("%d eh o maior\n", d);
return 0;
}
