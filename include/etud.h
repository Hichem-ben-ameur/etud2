/*
*	This file is part of etud.
*
*	Foobar is free software: you can redistribute it and/or modify
*	it under the terms of the GNU General Public License as published by
*	the Free Software Foundation, either version 3 of the License, or
*	(at your option) any later version.
*
*	Foobar is distributed in the hope that it will be useful,
*	but WITHOUT ANY WARRANTY; without even the implied warranty of
*	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*	GNU General Public License for more details.
*
*	You should have received a copy of the GNU General Public License
*	along with Foobar.  If not, see <https://www.gnu.org/licenses/>.
*/

/**
 * \file: etud.h
 * 
 * \brief le header
 */
#include <stdio.h>

typedef struct etud
{
  unsigned int num;
  char  nom[50];
  char  prenom[50];
  float note;
  struct etud* next;
}Etud;


/*
 * variable global externe
 */

extern Etud* pEtud;


/**
 * affichage de la liste des étudiants
 */
void print_list();


/**
 * insertion d'un étudiant
 * param 1 : char
 * param 2 : char
 * param 3 : int
 * param 4 : int
 */
int add_etud(char* nom, char* prenom, int note,int num);

/**
 * insertion d'un étudiant dans un fichier txt
 * param 1 : char
 * param 2 : char
 * param 3 : int
 * param 4 : int
 */
void add_etud_file(int numeroEtud,char* nom,char* prenom,int note);

/**
 * supression d'un étudiant
 * param 1 : int
 * return int : 0 si la suppression est éffectuer, 1 s'il ne trouve pas l'étudiant
 */
int supp_etud(int num);

/**
 *
 */
int lire_choix();

/**
 * recherche d'un étudiant avec son numéro
 * param 1 : int
 * return Etud* : l'étudiant s'il éxiste dans la liste sinon la valeur null
 */
Etud* recherche(int num);

/**
 * la moyenne de toute la liste
 * return int : la moyenne
 */
float moyenne();
