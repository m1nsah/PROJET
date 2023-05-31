#include"fonction.h"

int main(){
    printf("~ ~ ~ ~ ~ ~ CY PHONE ~ ~ ~ ~ ~ ~\n");
    int choix;
    printf("Que desirez vous faire\n");
    printf("    1 - GESTION\n");
    printf("    2 - VENTE\n");
    scanf("%d", &choix);
    int choix2;
    
    switch(choix){
        
        case 1:
            printf(" _____________________________\n");
            printf("| 1 . AJOUT TELEPHONE         |\n");
            printf("| 2 . VERIFIER UN QUANTITE    |\n");
            printf("| 3 . VERIFIER L'INVENTAIRE   |\n");
//             printf("| 4 . MODIFIER UN PRODUIT     |\n");
//             printf("| 5 . RECHERCHER UN PRODUIT   |\n");
            printf(" /////////////////////////////\n");
            
            scanf("%d",&choix2);
            
            switch(choix2){
                
                case 1:
                    tableau();
                    ajouterTelephone();
                    break;
                    
                case 2:
                    tableau();
                    affichequantite();
                    break;
                    
                case 3:
                    tableau();
                    affichequantite();
                    break;
                    
                /*case 4:
                    void tableau();
                    void modifierproduit();
                    break;
                    
                case 5:
                    void tableau();
                    void rechercheproduit();
                    break;
                */
                
                // Fonctions non terminée
                    
                default : 
                    printf("ERREUR DE SAISIE");
            }
                    
            break;
            
        case 2 :
            
            printf(" _____________________________\n");
            printf("| 1 . AJOUT CLIENT            |\n");
            printf("| 2 . VENDRE UN PRODUIT       |\n");
            printf(" /////////////////////////////\n");
            
            scanf("%d",&choix2);
            
            switch(choix2){
                
                case 1:
                    Ajouterclient();
                    break;
                    
                case 2:
                    printf("Désolez, programme en cours de cloture");
                    break;
            
                default : ("ERREUR DE SAISIE");
            }
               
            break;
            
            
        default : printf("Erreur de SAISIE");
    }
    return 0;
}
            
            
