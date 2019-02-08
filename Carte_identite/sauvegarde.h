#ifndef SAUVEGARDE_H_INCLUDED
#define SAUVEGARDE_H_INCLUDED
#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "carte.h"

#define MAXTEXTE 255


//Prototypes des fonctions
//===============================================
extern void LireCarte(FILE * pFile, char cTexteTemp[MAXTEXTE], char buff[MAXTEXTE]);
extern void EcrireCarte(FILE * pFile, tCarte LaCarte, int nId);
extern int SetId(FILE * pFile);
//===============================================


#endif // SAUVEGARDE_H_INCLUDED
