#include <stdio.h>

/**
* Fonction reset_to_98
*
* Cette fonction ne renvoie rien, elle change juste la valeur
* de la variable int pointée à 98.
**/

void reset_to_98(int *n)
/*
* Cette fonction permet de changer la valeur d'un nombre entier
* a la valeur 98, et ce quelle que soit sa precedente valeur.
*
* Parametres :
*    - n : pointeur int permettant de modifier la valeur directement
*          présente a l'adresse de la variable n
**/
{
*n = 98;
}
