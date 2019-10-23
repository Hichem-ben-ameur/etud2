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
 * \file: main.c
 * 
 * \brief le programme principal
 */
#include <stdio.h>
#include<stdlib.h>
#include "appli.h"
#include "etud.h"

/*
 * Variable globale qui contient la liste chainé etudiants
 */

Etud* pEtud;

int main (int argc, char* argv[]){
    int note,numeroEtud;
    char nom[50],prenom[50],choix;
    pEtud = malloc(sizeof *pEtud);
    printf(" === Scola === \n");
    print_menu();
    scanf("%c", &choix);
    switch (choix){
    case '1':
        print_list();
        print_menu();
        
        break;
    case '2':
         printf("Nom: \n");
        scanf("%s", nom);
        printf("Prénom: \n");
        scanf("%s", prenom);
        printf("Note: \n");
        scanf("%d", &note);
        printf("Numéro: \n");
        scanf("%d", &numeroEtud);
        add_etud(nom,prenom,note,numeroEtud);
        print_list();
        return 0;
        break;
    case '3':
        printf("Numero étudiant:  \n");
        scanf("%d", &numeroEtud);
        recherche(numeroEtud);
        break;
    case '4':
       printf("%d \n",moyenne());
        break;
    default :
        printf("Choix invalide ! \n");
        printf("merci de saisir un chiffre entre 1 et 4 \n");
        print_menu();
    }

    /*add_etud("houssein","hamadi",100,23);
    add_etud("hicham","hicham",200,2233);
    //float sum=moyenne();
    printf("%d \n",sum);
   // recherche(23);
    //supp_etud(23);
    //print_list();

*/
    
    return 0; 
}









 
     
     
    