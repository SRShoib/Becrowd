 #include <stdio.h>
 #include <math.h>
 int main(){
     int i = 1, r, w, l;

     while (1)
     {
         scanf("%d", &r);
         if (r == 0)
            break;
         scanf("%d%d", &w, &l);
         long int d = sqrt((w * w) + (l * l));
         if (w != l)
         {

             if ((r * 2) >= d)
                printf("Pizza %d fits on the table.\n", i);
             else
                printf("Pizza %d does not fit on the table.\n", i);
             i++;
         }
     }



 return 0;
 }
