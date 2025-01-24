#include "exo6.h"

 int comparaison_croissante(int a, int b, int c)
   {
    if(a<=b && b<=c) {
            printf("l'ordre croissant de ces nombres est donc :\n %d<=%d<=%d",a, b, c);
        }
        else if(a<=c && c<=b){
            printf("l'ordre croissant de ces nombres est donc :\n %d<=%d<=%d",a, c, b);
        }
         else if(b<=a && a<=c){
            printf("l'ordre croissant de ces nombres est donc :\n %d<=%d<=%d",b, a, c);
        }
         else if(b<=c && c<=a){
            printf("l'ordre croissant de ces nombres est donc :\n %d<=%d<=%d",b, c, a);
        }
         else if(c<=a && a<=b){
            printf("l'ordre croissant de ces nombres est donc :\n %d<=%d<=%d",c, a, b);
        }
         else {
            printf("l'ordre croissant de ces nombres est donc :\n %d<=%d<=%d",c, b, a);
        }
        return  comparaison_croissante;
   }
