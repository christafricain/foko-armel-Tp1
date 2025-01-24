#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "exo2.h"
#include "exo3.h"
#include "exo4.h"
#include "exo5.h"
#include "exo6.h"
  int main()
        {
           float nombre1, nombre2;
            /*int nombre;

      printf("Entrez un entier a 3 chiffres\n");
    scanf("%d", &nombre);

     int result = renverser(nombre);*/
     /*printf("Entrer vos 2 nombres a multiplier\n");
     scanf("%f%f", &nombre1, &nombre2);
     float produit = produit3(nombre1, nombre2);
      */
     /* int valeur;
    printf("Entrez votre nombre pour le test de parite :\n");
    scanf("%d", &valeur);
    int parite = entier(valeur);
    return 0;*/
    /*printf("Entrer votre premier entier a\n");
    int a, b;
    scanf("%d", &a);
    printf("Entrer votre 2e entier b\n");
    scanf("%d", &b);
    int comparer = comparaison(a, b);
    return 0;*/
    int a, b, c;
    printf("Entrez vos 3 entiers a comparer\n");
    scanf("%d%d%d",&a, &b, &c);
    printf("Les 3 nombres dans l'ordre que vous avez donner sont : %d , %d , %d.\n", a, b, c);
     int croissant = comparaison_croissante(a, b, c);
  }
