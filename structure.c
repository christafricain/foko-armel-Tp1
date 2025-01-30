#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_ENSEIGNANTS 25
#define MAX_CODE 11
#define MAX_NOM 31
#define MAX_PRENOM 31
#define MAX_GRADE 31

// D�finition de la structure Enseignant
typedef struct {
    char code[MAX_CODE];
    char nom[MAX_NOM];
    char prenom[MAX_PRENOM];
    char grade[MAX_GRADE];
    char sexe;
} Enseignant;

// cr�er un vecteur d'enseignants
void creerEnseignants(Enseignant *vecteur, int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnseignant %d:\n", i + 1);

        printf("Code: ");
        scanf("%s", vecteur[i].code);

        printf("Nom: ");
        scanf("%s", vecteur[i].nom);

        printf("Prenom: ");
        scanf("%s", vecteur[i].prenom);

        printf("Grade: ");
        scanf("%s", vecteur[i].grade);

        printf("Sexe (M/F): ");
        scanf(" %c", &vecteur[i].sexe);
    }
}

// v�rifier si un enseignant existe
void verifierEnseignant(Enseignant *vecteur, int n, Enseignant u) {
    bool existe = false;

    for (int i = 0; i < n; i++) {
        if (strcmp(vecteur[i].code, u.code) == 0) {
            existe = true;
            break;
        }
    }

    if (existe) {
        printf("\nCet enseignant existe dans la base de donn�es.\n");
    } else {
        printf("\nCet enseignant n'existe pas dans la base de donn�es.\n");
    }
}

// lister les enseignants par sexe
void listerParSexe(Enseignant *vecteur, int n, char sexe) {
    printf("\nListe des enseignants de sexe %c:\n", sexe);
    bool trouve = false;

    for (int i = 0; i < n; i++) {
        if (vecteur[i].sexe == sexe) {
            printf("- %s %s (Code: %s, Grade: %s)\n",
                   vecteur[i].nom,
                   vecteur[i].prenom,
                   vecteur[i].code,
                   vecteur[i].grade);
            trouve = true;
        }
    }

    if (!trouve) {
        printf("Aucun enseignant trouv� pour ce sexe.\n");
    }
}

int main() {
    Enseignant vecteur[MAX_ENSEIGNANTS];
    int nombreEnseignants;

    printf("Entrez le nombre d'enseignants (max %d): ", MAX_ENSEIGNANTS);
    scanf("%d", &nombreEnseignants);

    if (nombreEnseignants > MAX_ENSEIGNANTS || nombreEnseignants < 1) {
        printf("Nombre d'enseignants invalide!\n");
        return 1;
    }

    // Cr�ation du vecteur d'enseignants
    creerEnseignants(vecteur, nombreEnseignants);

    // Exemple d'utilisation de la v�rification
    Enseignant recherche;
    printf("\nRecherche d'un enseignant\n");
    printf("Entrez le code: ");
    scanf("%s", recherche.code);
    verifierEnseignant(vecteur, nombreEnseignants, recherche);

    // enseignants par sexe
    printf("\nListe des enseignants par sexe:\n");
    printf("Hommes:\n");
    listerParSexe(vecteur, nombreEnseignants, 'M');
    printf("\nFemmes:\n");
    listerParSexe(vecteur, nombreEnseignants, 'F');

    return 0;
}
