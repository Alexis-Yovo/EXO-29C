# Exercice 29 - Lecture de Fichier et Calcul

## Objectif

Lire un fichier texte contenant des données structurées, extraire les informations et afficher le résultat d’un calcul simple.

## Format des Données

Chaque ligne du fichier contient 4 champs :
- Nom de la personne (texte)
- Nom de l'article (texte)
- Quantité (nombre entier)
- Prix unitaire (nombre entier)
- 
## Exemple :
Dupon Villebrequin 10 1000
Duran Brosse 20 567


## Variables Utilisées

- `cNom` : tableau de 80 caractères (pour le nom)
- `cArticle` : tableau de 80 caractères (pour le nom de l'article)
- `iNombre` : entier (quantité)
- `iPrix` : entier (prix unitaire)

## Fonctionnalité Principale

Utilisation de la fonction `fscanf` dans une boucle pour lire chaque ligne du fichier.

## Calcul à Afficher

Pour chaque ligne, afficher :
- Le nom de la personne
- Le nom de l'article
- Le produit de la quantité par le prix unitaire (`iNombre * iPrix`)
