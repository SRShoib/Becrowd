#include <stdio.h>
int main(){
    float n1, n2, n3, n4, n5, med, media;
    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
    media = ((n1*2) + (n2*3) + (n3*4) + n4) / 10.0;
    printf("Media: %.1f\n", media);
    if (media >= 7.0)
        printf("Aluno aprovado.\n");
    else if (media < 5.0)
        printf("Aluno reprovado.\n");
    else
    {
        printf("Aluno em exame.\n");
        scanf("%f", &n5);
        printf("Nota do exame: %.1f\n", n5);
        med = (media + n5)/ 2.0;
        if (med >= 5.0)
            printf("Aluno aprovado.\n");
        else
            printf("Aluno reprovado.\n");
        printf("Media final: %.1f\n", med);

    }


return 0;
}
