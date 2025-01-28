#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "exo_one.h"
#include "exo2.h"
#include "exo3.h"
#include "exo4.h"
#include "exo5.h"
#include "exo6.h"
#include "exo16.h"
  int main(void)
        {
             afficher_bonjour();
           float nombre1, nombre2;
            int nombre;

      printf("Entrez un entier a 3 chiffres\n");
    scanf("%d", &nombre);

     int result = renverser(nombre);
     printf("Entrer vos 2 nombres a multiplier\n");
     scanf("%f%f", &nombre1, &nombre2);
     float produit = produit3(nombre1, nombre2);


      int valeur;
    printf("Entrez votre nombre pour le test de parite :\n");
    scanf("%d", &valeur);
    int parite = entier(valeur);



    printf("Entrer votre premier entier a\n");
    int a, b;
    scanf("%d", &a);
    printf("Entrer votre 2e entier b\n");
    scanf("%d", &b);
    int comparer = comparaison(a, b);



    int a, b, c;
    printf("Entrez vos 3 entiers a comparer\n");
    scanf("%d%d%d",&a, &b, &c);
    printf("Les 3 nombres dans l'ordre que vous avez donner sont : %d , %d , %d.\n", a, b, c);
     int croissant = comparaison_croissante(a, b, c);




    signed char caract1[100] = "Connais-toi toi-meme!";
    signed char caract2[100] = "Je pense donc je suis!";
    printf("Avant la permutation de caracteres caract1 = %s et caract2 = %s\n",caract1, caract2);
    signed char *ptr_caract1 = caract1;
    signed char *ptr_caract2 = caract2;
    permuter(&ptr_caract1,&ptr_caract2);
    afficher(ptr_caract1, ptr_caract2);
    return 0;
  }
