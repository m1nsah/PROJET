#ifndef HEADER_FONCTION
#define HEADER_FONCTION
#include<stdio.h>
#include<stdlib.h>
#define taille 20

typedef struct {
    int reftel;
	char marque[50];
	char modele[50];
	int prix;
    int quantite;
} Telephone;

typedef struct {
    int refclient;
	char nom[taille];
	char prenom[taille];
    Telephone tabachats[3];
} Client;

typedef struct {
    int ref;
    char telephone[50];
    char modele[50];
    int quantite;
    int prix;
} Prdef;

void ajouterTelephone();
void affichetabproduit();
void affichequantite();
void affichequantitenul();
void Ajouterclient();
void tableau();
#endif


