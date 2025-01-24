#include "exo2.h"

  int renverser(int nombre)
{

    if (nombre>=100 && nombre<=999)
    {
      printf("L'entier a bien 3 chiffres\n");
      int centaine, reste1, decimal, unite;
      centaine = nombre/100;
      reste1 = nombre%100;
      decimal = reste1/10;
      unite = reste1%10;
 printf("Le nombre renverse est donc : %d%d%d\n",unite, decimal, centaine);
    }
    else{
        printf("Le nombre entre n'est pas un entier a 3 chiffres, veillez relancer le programme pour reessayer\n");
    }
    return nombre;
}
