#include "exo5.h"

int comparaison(int a, int b)
 {
   if (a==b){
    printf("%d=%d", a, b);
   }
   else if(a<b)
    {
    printf("%d<%d", a, b);
   }
   else{
    printf("%d>%d", a, b);
   }
   return comparaison;
 }
