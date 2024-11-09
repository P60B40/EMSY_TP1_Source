//-----------------------------------------------------------------------------------//
// Nom du projet 		: EMSY TP1 
// Nom du fichier 		: EMSY_TP1.c 
// Date de création 	: 27.09.2024
// Date de modification : 09.11.2024
//
// Auteur 				: Zitouni Bilal/ Savary Diego
//
// Version				: 0.2
//
// Description : ce programme calcule l'air d'un rectangle  
//
//
// Remarques :  nous n'avons pas réussi à push donc on édit le programme depuis github directement         
//----------------------------------------------------------------------------------//

//--- librairie standart ---//
#include <stdio.h>	// pour usage printf et scanf_s
                    // Nouveauté du VC++ 2005, 2008, 2010 et 2015 : le scanf_s remplace scanf

//-- programme principale --// 
int main(void)
{
  int largeur = 2;
  int longueur = 3;

  int air = 0;

  air = largeur*longueur;

  printf("l'air du rectangle est de %d /n",air);
  
  return(0);
}
