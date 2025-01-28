#include <stdio.h>
#include "exo16.h"

   void permuter(signed char *caract1, signed char *caract2)
   {
       signed char *temporaire = *caract1;
       *caract1 = *caract2;
       *caract2 = temporaire;
   }
   void afficher(const signed char *caract1, const signed char *caract2 )
     {
          printf("Apres la permutation de caracteres caract1 = %s et caract2 = %s\n",caract1, caract2);
     }
