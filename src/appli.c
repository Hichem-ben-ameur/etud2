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
 * \file: appli.c
 * 
 * \brief le fichier de choix de l'utilisateur
 */

#include "appli.h"

/**
 * affichage du menu
 */
void print_menu(){
  printf(" 1) Afficher la liste      \n");
  printf(" 2) Ajouter un etudiant    \n");
  printf(" 3) Supprimer un etusiant  \n");
  printf(" 4) Afficher la moyenne    \n");
  printf("\n Saisir un choix :       \n");
}
