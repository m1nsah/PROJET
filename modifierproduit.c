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


Prdef tab[20];

void modifierproduit(){
    FILE *fichier;
    fichier = fopen("test1.txt", "r+");
    int refact = 0;
    int i;
    int nouvellequantite;
    int r;
    for(i=0; i<15; i=i+5){
        fscanf(fichier, "%d", &tab[refact].ref);
        fscanf(fichier, "%s", tab[refact].telephone);
        fscanf(fichier, "%s", tab[refact].modele);
        fscanf(fichier, "%d", &tab[refact].quantite);
        fscanf(fichier, "%d", &tab[refact].prix);
        refact++;
    }
    printf("Quelle est la reference du produit en question ?");
    scanf("%d", &r);
    printf("Quelle est la nouvelle quantité ?");
    scanf("%d", &nouvellequantite);
    tab[r-1].quantite = nouvellequantite;
    /*int s;
    for(s = 0; s < 21; s++){
        printf("%d %s %s %d %d\n", tab[s].ref, tab[s].telephone, tab[s].modele, tab[s].quantite, tab[s].prix);
    }*/
    rewind(fichier);
    FILE *fichier2;
    fichier2 = fopen("test2.txt", "r+");
    int s = 0;
    
    }
    //int k;
    //for(k = 0; k < 21; k++){
        //printf("%d %s %s %d %d\n", tab[s].ref, tab[s].telephone, tab[s].modele, tab[s].quantite, tab[s].prix);
    fclose(fichier);
    fclose(fichier2);
    
}
