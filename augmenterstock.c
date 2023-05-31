#include<stdio.h>
#include<stdlib.h>
#include"fonction.c"

typedef struct {
    int ref;
    char telephone[50];
    char modele[50];
    int quantite;
    int prix;
} Prdef;



void affichetabproduit(){
    FILE *fichier;
    fichier = fopen("test1.txt", "r+");
    int refact = 0;
    int i;
    for(i=0; i<15; i=i+5){
        fscanf(fichier, "%d", &tab[refact].ref);
        fscanf(fichier, "%s", tab[refact].telephone);
        fscanf(fichier, "%s", tab[refact].modele);
        fscanf(fichier, "%d", &tab[refact].quantite);
        fscanf(fichier, "%d", &tab[refact].prix);
        refact++;
    }
    int s;
    for(s = 0; s < 21; s++){
        printf("%d %s %s %d %d\n", tab[s].ref, tab[s].telephone, tab[s].modele, tab[s].quantite, tab[s].prix);
    }
    fclose(fichier);
}
/*Nombre maximum de modèle en vente*/




