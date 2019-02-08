#include "sauvegarde.h"

//Implémentation de la méthode
//======================================
//BUT : Lire ce qui est contenu dans le fichier
//ENTREE : Le fichier texte et les variables buffer
//SORTIE : Le fichier texte
//======================================
extern void LireCarte(FILE * pFile, char cTexteTemp[MAXTEXTE], char buff[MAXTEXTE])
{
    buff[MAXTEXTE]="";
    if((pFile=fopen("sauvegardecarte.txt","r"))==NULL)
    {
        perror("Erreur de creation de fichier");
        //printf("stderr,"Erreur de creation de fichier : %s",strerror(errornum));
    }
    else
    {
        while (fgets(cTexteTemp,MAXTEXTE,pFile)!=NULL)
        {
            strcat(buff,cTexteTemp);
        }
    }
    fclose(pFile);
}


//Implémentation de la méthode
//======================================
//BUT : Ecrire la carte d'identité au sein d'un fichier texte
//ENTREE : Le fichier texte et les différents champs de la carte
//SORTIE : Le fichier texte
//======================================
extern void EcrireCarte(FILE * pFile, tCarte *LaCarte, int nId)
{

    if((pFile=fopen("sauvegardecarte.txt","a"))==NULL)
    {
        perror("Erreur de creation de fichier");
        //printf("stderr,"Erreur de creation de fichier : %s",strerror(errornum));
    }
    else
    {
        fprintf(pFile, "!Client %d : ",nId);
        fputc('\n',pFile);
        fprintf(pFile,"%s",LaCarte->cNom);
        fputc('\n',pFile);
        fprintf(pFile,"%s",LaCarte->cPrenom);
        fputc('\n',pFile);
        fprintf(pFile,"%s",LaCarte->cAdresse);
        fputc('\n',pFile);
        fprintf(pFile,"%s",LaCarte->cCp);
        fputc('\n',pFile);
        fprintf(pFile,"%s",LaCarte->cVille);
        fputc('\n',pFile);
        fputc('\n',pFile);

        //on libère l'espace mémoire
        free(LaCarte->cNom);
        free(LaCarte->cPrenom);
        free(LaCarte->cAdresse);
        free(LaCarte->cCp);
        free(LaCarte->cVille);
    }
    fclose(pFile);
    system("pause"); //si on veut faire un ENTER pour faire suivant
}


/*
//Implémentation de la méthode
//======================================
//BUT : Chercher combien il y a d'identifiant déjà disponible dans le fichier
//ENTREE : Le fichier texte et le nombre d'id
//SORTIE : Le fichier texte et le nombre d'id
//NOTE : C'est un essai, ça ne marche pas
//======================================
extern int SetId(FILE * pFile)
{
    int nId=0, nCpt=0;
    char buff[MAXTEXTE]="";
    char cTexteTemp[MAXTEXTE]="";
    if((pFile=fopen("sauvegardecarte.txt","r"))==NULL)
    {
        perror("Erreur de creation de fichier");
        //printf("stderr,"Erreur de creation de fichier : %s",strerror(errornum));
    }
    else
    {
        while (fgets(cTexteTemp,MAXTEXTE,pFile)!=NULL)
        {
            strcat(buff,cTexteTemp);
        }
        for (nCpt=0; nCpt <= MAXTEXTE; nCpt++)
        {
            if (buff[nCpt]="!")
            {
                nId++;
            }
        }
    }
    fclose(pFile);
    buff[MAXTEXTE]="";
    return nId;
}
*/
