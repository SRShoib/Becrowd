#include <stdio.h>
int main(){
    char text[101];
    int i, j;

        gets(text);

        for (i=0; text[i] != '\0'; i++)
        {
            if (text[i] == ',')
            {
                printf("\n");
            }
            else
            printf("%c", text[i]);
        }
        printf("\n");

return 0;
}
