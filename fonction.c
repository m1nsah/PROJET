#include"fonction.h"

void ajouterTelephone(){
        Telephone T1;
    
        FILE *f = NULL;
        f = fopen("produit.txt", "ab");

        printf("Notez sa référence, attention, verifiez votre inventaire et notez les références par ordre croissant : \n");
        scanf("%d", &T1.reftel);
        while((T1.reftel > 20) || (T1.reftel < 0)){
            printf("Mauvaise saisie");
            scanf("%d", &T1.reftel);
        }
        fprintf(f, "%d ", T1.reftel);
        
        printf("Marque : \n");
        scanf("%s", T1.marque);
        fprintf(f, "%s ", T1.marque);
        
        printf("Modèle : \n");
        scanf("%s", T1.modele);
        fprintf(f, "%s ", T1.modele);
        
        printf("En quelle quantité ? (unité) : \n");
        scanf("%d", &T1.quantite);
        fprintf(f, "%d ",T1.quantite);
        
        printf("Quel est le prix ? :\n");
        scanf("%d", &T1.prix);
        fprintf(f, "%d\n",T1.prix);
        
        
        
        fclose(f);
        
        printf("Téléphone ajouté avec succès.\n");
}
    
    
void Ajouterclient(){
    
    FILE *f = NULL;
    f = fopen("client.txt", "ab");
    
    Client C1;
    printf("Notez sa référence, attention, verifiez vos reférences clients et notez les références par ordre croissant : \n");
    scanf("%d", &C1.refclient);
    while((C1.refclient > 20) || (C1.refclient < 0)){
        printf("Mauvaise saisie");    
        scanf("%d", &C1.refclient);
        }
    fprintf(f, "%d ", C1.refclient);
    
    printf("Quel est le nom du Client ?: ");
    scanf("%s", C1.nom);
    fprintf(f, "%s ", C1.nom);
    
    printf("Quel est son prénom ? : ");
    scanf("%s", C1.prenom);
    fprintf(f, "%s\n", C1.prenom);
    
    printf("Bienvenue parmi nous Mr/Mme %s, votre numero de référence est : %d \n",C1.nom,C1.refclient);
    fclose(f);
}
    
void affichetabproduit(){
    Prdef tab[20];
    FILE *fichier;
    fichier = fopen("produit.txt", "r+");
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

void affichequantitenul(){
    int i;
    int s = taille*5;
    FILE *fichier;
    int c0;
    char c1[50];
    char c2[50];
    int c3;
    float c4;
    int c5=0;
    fichier = fopen("produit.txt", "r+");
    for(i=0; i<s; i++){
        
        fscanf(fichier, "%d", &c0);
        fscanf(fichier, "%s", c1);
        fscanf(fichier, "%s", c2);
        fscanf(fichier, "%d", &c3);
        if (c3==0) {
            printf("ALARME : Le produit %s %s, n'a plus aucunes disponibilités\n", c1,c2);
            c3 = 1;
            c5=1;
            }
        fscanf(fichier, "%f", &c4);
    }
    //printf("%d\n", c3);
    if (c5=0){
        printf("Aucun produit à zéro");
    }
    fclose(fichier);
}

void affichequantite(){
    int r;
    int i;
    printf("Quelle est la référence du produit dont vous voulez vérifier la quantité ?\n");
    scanf("%d", &r);
    int s = r*5;
    FILE *fichier;
    int c0;
    char c1[50];
    char c2[50];
    int c3;
    float c4;
    fichier = fopen("produit.txt", "r+");
    for(i=0; i<s; i++){
        fscanf(fichier, "%d", &c0);
        fscanf(fichier, "%s", c1);
        fscanf(fichier, "%s", c2);
        fscanf(fichier, "%d", &c3);
        fscanf(fichier, "%f", &c4);
    }
    printf("%d\n", c3);
    fclose(fichier);
}


void tableau(){
    int tab;
    printf("Desirez vous avoir un aperçu de l'inventaire ?\n");
    printf("    1. OUI\n");
    printf("    2. Autre numero\n");
    scanf("%d", &tab);
    switch(tab){
        case 1:
            affichetabproduit();
            break;
        default : 
            printf("OK\n");
    }
}


