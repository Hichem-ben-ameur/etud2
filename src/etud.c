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
 * \file: etud.c
 * 
 * \brief le fichier de gestion des étudiants
 */

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include <ctype.h>
#include "etud.h"

/**
 * \fn add_etud
 * \brief fonction insertion d'un étudiant dans une liste
 * \param 1 : char
 * \param 2 : char
 * \param 3 : int
 * \param 4 : int
 */
int add_etud(char* nom, char* prenom, int note, int num){
  //printf("%s \n",pEtud->next);
  Etud* etud = malloc(sizeof * etud);
  strcpy(etud->nom,nom);
  strcpy(etud->prenom,prenom);
  etud->num=num;
  etud->note=note;
  etud->next=pEtud->next;
  pEtud->next= etud;
  add_etud_file(num,nom,prenom,note);
  return 0;
}

/**
 * \fn add_etud_file
 * \brief fonction insertion d'un étudiant dans un fichier txt
 * \param 1 : char
 * \param 2 : char
 * \param 3 : int
 * \param 4 : int
 */
void add_etud_file(int numeroEtud,char* nom,char* prenom,int note){

FILE *f = fopen("../data/etudiants.txt", "a");
if (f == NULL)
{
    printf("Le fichier étudiants exite pas !\n");
}

fprintf(f, "%s;%s;%d;%d \n",nom,prenom,note,numeroEtud);


fclose(f);


  
}

/**
 * \fn supp_etud
 * \brief fonction supression d'un étudiant
 * \param 1 : int
 * return int : 0 si la suppression est éffectuer, 1 s'il ne trouve pas l'étudiant
 */
int supp_etud(int num){
  Etud *cur, *cur1;
	cur1 = cur;
	cur = pEtud;

	while(cur->num != num){
		cur1 = cur;
		cur = cur->next;
	}

	if(cur == NULL)
		return 1;

	cur1->next = cur->next;
	free(cur);
	return 0;
}

/**
 * \fn recherche
 * \brief fonction recherche d'un étudiant avec son numéro étudiant
 * \param 1 : int
 *  return Etud* : l'étudiant s'il éxiste dans la liste sinon la valeur null
 */
Etud* recherche(int num){
  Etud *cur;
  cur= pEtud;
  while(cur!=NULL){
    if(cur->num==num){
      printf("%s %s\n",cur->nom,cur->prenom);
      return cur;
    }
    cur=cur->next;
      
  }
  return NULL;
}

/**
 * \fn moyenne
 * \brief fonction moyenne des notes de toute la liste des étudiants
 *  return int : la moyenne des notes
 */
float moyenne(){
   int i=0;
   float sum=0;
   Etud *etud = pEtud->next;
  while(etud->next){
 

    sum=sum+etud->note;
    etud= etud->next;
    i++;
     printf("%d \n",sum);
    
  }
  //printf("ddddddd");
  /*Etud *cur;
  int sum=0,i=0;
  cur= pEtud->next;
  //printf("dd \n");
  /*while(cur->next!=NULL){
   
    sum=cur->note;
    i++;
    cur=pEtud->next;

    
  }*/
    
    //printf("%d \n",sum);
  return sum;
}

/**
 * \fn print_list
 * \brief fonction affichage le liste des étudiants
 */
void print_list(){
  printf(" Liste des etudiants \n ");
  Etud *etud = pEtud->next;
  while(etud->next){
    printf("dd");
    printf("%s \n",etud->prenom);
    etud= etud->next;
  }

}

/**
 *\fn modifie
 * \brief fonction modification de note
 * \param 1 : int
 * \param 2 : int
 * return int : 0 si la modification est effectue sinon 1
 */
int modifie(int num, int Nnote){
  Etud *cur, *cur1;
	cur1 = cur;
	cur = pEtud;

	while(cur->num != num){
		cur1 = cur;
		cur = cur->next;
	}

	if(cur == NULL)
		return 1;

  cur->note= Nnote;
	return 0;
}
