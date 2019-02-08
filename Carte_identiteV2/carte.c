#include "carte.h"

//Implémentation de la méthode
//======================================
//BUT : Créer une nouvelle carte d'identité que l'on va stocker dans un fichier texte
//ENTREE : Les différents champs de la carte
//SORTIE : La Carte
//======================================
extern void CreerCarte(tCarte *LaCarte)
{
    char cBuff[MAXCAR];
    int nLong = 0;


    fflush(stdin);
    printf("Entrer votre nom : ");
    scanf(&cBuff);
    nLong = strlen(cBuff);
    if ((*LaCarte->cNom = malloc(nLong*sizeof(char)))==NULL)
    {
        printf("error");
    }
    else
    {
        *LaCarte->cNom=cBuff;
    }
    fflush(stdin);



    printf("Entrer votre prenom : ");
    scanf(&cBuff);
    nLong = strlen(cBuff);
    if ((*LaCarte->cPrenom = malloc(nLong*sizeof(char)))==NULL)
    {
        printf("error");
    }
    else
    {
        *LaCarte->cPrenom=cBuff;
    }
    fflush(stdin);



    printf("Entrer votre adresse : ");
    scanf(&cBuff);
    nLong = strlen(cBuff);
    if ((*LaCarte->cAdresse = malloc(nLong*sizeof(char)))==NULL)
    {
        printf("error");
    }
    else
    {
        *LaCarte->cAdresse=cBuff;
    }
    fflush(stdin);



    printf("Entrer votre CodePoste : ");
    scanf(&cBuff);
    nLong = strlen(cBuff);
    if ((*LaCarte->cCp = malloc(nLong*sizeof(char)))==NULL)
    {
        printf("error");
    }
    else
    {
        *LaCarte->cCp=cBuff;
    }
    fflush(stdin);



    printf("Entrer votre ville : ");
    scanf(&cBuff);
    nLong = strlen(cBuff);
    if ((*LaCarte->cVille = malloc(nLong*sizeof(char)))==NULL)
    {
        printf("error");
    }
    else
    {
        *LaCarte->cVille=cBuff;
    }
    fflush(stdin);

}

