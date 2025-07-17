#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_LENGTH 80

int main() {
    // Déclaration des variables
    char cNom[MAX_NAME_LENGTH];
    char cArticle[MAX_NAME_LENGTH];
    int iNombre;
    int iPrix;

    // Ouverture du fichier en mode lecture
    FILE *fp = fopen("donnees.txt", "r");
    if (fp == NULL) {
        printf("Impossible d'ouvrir le fichier.\n");
        return EXIT_FAILURE;
    }

    // Boucle pour lire chaque ligne du fichier
    while (fscanf(fp, "%79s %79s %d %d", cNom, cArticle, &iNombre, &iPrix) == 4) {
        // Calcul du produit
        int produit = iNombre * iPrix;

        // Affichage des informations
        printf("Nom: %s\n", cNom);
        printf("Article: %s\n", cArticle);
        printf("Nombre: %d\n", iNombre);
        printf("Prix: %d\n", iPrix);
        printf("Produit (Nombre * Prix): %d\n\n", produit);
    }

    // Fermeture du fichier
    fclose(fp);

    return EXIT_SUCCESS;
}
