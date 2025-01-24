#include "exo4.h"
int entier(int valeur)
 {
     int parite ;
     parite = valeur%2;
    if( parite == 0 && valeur != 0){
        printf("La parite de cet entier est PAIRE");
    }
    else if (parite == 1 ){
        printf("La parite de cet entier est IMPAIRE");
    }
    else{
        printf("La parite de cet entier est NULLE");
    }
    return valeur;
 }
